#include <WiFi.h>
#include <time.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include <ESP32Servo.h>

const char* ssid = "WIFI";
const char* password = "PASSWORD";

const char* ntpServer = "pool.ntp.org";
const long gmtOffset_sec = 0;
const int daylightOffset_sec = 3600;

#define TFT_CS     5
#define TFT_DC     2
#define TFT_RST    4

#define MOTOR_PIN  27
#define SERVO_PIN  14

#define BTN_PLAY   32
#define BTN_PREV   33
#define BTN_NEXT   13

#define STATUS_LED 12


Adafruit_ILI9341 tft(TFT_CS, TFT_DC, TFT_RST);
Servo tonearm;


bool playing = false;


void connectWiFi()
{
    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
    }

    configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
}


void drawClock()
{
    struct tm timeinfo;

    if (!getLocalTime(&timeinfo))
        return;

    char buffer[10];

    strftime(buffer, sizeof(buffer), "%H:%M", &timeinfo);

    tft.fillRect(0, 0, 240, 50, ILI9341_BLACK);

    tft.setCursor(20, 10);
    tft.setTextColor(ILI9341_WHITE);
    tft.setTextSize(4);
    tft.print(buffer);
}


void updateMotor()
{
    if (playing)
        analogWrite(MOTOR_PIN, 180);
    else
        analogWrite(MOTOR_PIN, 0);
}


void updateServo()
{
    if (playing)
        tonearm.write(45);
    else
        tonearm.write(0);
}


void checkButtons()
{
    static bool lastPlay = HIGH;

    bool play = digitalRead(BTN_PLAY);

    if (lastPlay == HIGH && play == LOW)
    {
        playing = !playing;

        updateMotor();
        updateServo();
    }

    lastPlay = play;

    // Previous
    if (digitalRead(BTN_PREV) == LOW)
    {
    }

    // Next
    if (digitalRead(BTN_NEXT) == LOW)
    {
    }
}


void setup()
{
    Serial.begin(115200);

    pinMode(MOTOR_PIN, OUTPUT);

    pinMode(BTN_PLAY, INPUT_PULLUP);
    pinMode(BTN_PREV, INPUT_PULLUP);
    pinMode(BTN_NEXT, INPUT_PULLUP);

    pinMode(STATUS_LED, OUTPUT);

    digitalWrite(STATUS_LED, LOW);

    tonearm.attach(SERVO_PIN);

    tft.begin();
    tft.setRotation(1);
    tft.fillScreen(ILI9341_BLACK);

    connectWiFi();

    updateMotor();
    updateServo();
}

void loop()
{
    drawClock();

    checkButtons();

    digitalWrite(STATUS_LED, WiFi.status() == WL_CONNECTED);

    delay(100);
}