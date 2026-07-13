# The Plan
***(15min)***

## Goal

Build a compact desktop Bluetooth speaker and clock inspired by a vintage record player. The device will feature a spinning record, moving tonearm, colour display, Bluetooth audio, and physical controls. It will use a custom PCB to minimise wiring and create a clean design.

## Features
- Bluetooth audio playback
- Digital clock with Wi-Fi time sync
- 2.4" colour TFT display
- Spinning record animation
- Moving tonearm
- Physical playback buttons
- 3D printed enclosure
- Custom PCB
- Powered by a 5V wall adapter

## Electronics
- ESP32-WROOM-32
- 2.4" ILI9341 SPI TFT Display
- PAM8403 Audio Amplifier
- 4Ω 3W Speaker
- 5V DC Motor
- IRLZ44N MOSFET
- SG90 Servo
- 4× Push Buttons
- 5.5×2.1mm Barrel Jack
- On/Off Switch
- Power LED
- Status LED

## Passive Components
- 220Ω Resistor
- 10kΩ Resistor
- 100nF Capacitors
- 10µF Capacitors
- 100µF Capacitors
- 470µF Capacitor
- 1N5819 (or SS14) Flyback Diode

## Mechanical
- Custom PCB
- 3D Printed Enclosure
- 3D Printed Turntable
- 3D Printed Record
- 3D Printed Tonearm
- 608 Bearing
- M2/M3 Hardware

## PCB Purpose
The PCB is the main "hub" of the project, all components leading back to it.

### Core Requirements
- Single custom PCB for all electronics
- Powered from a 5V DC barrel jack
- Common ground plane for all components
- Clearly labelled connectors and test points
- Compact layout to fit inside the enclosure

## Functional Requirements

### Microcontroller
- ESP32-WROOM-32
- Wi-Fi antenna kept free from copper and components

### Display
- Header for 2.4" ILI9341 SPI TFT display
- Backlight power connection
- SPI traces kept short where practical

### Audio
- PAM8403 amplifier integrated on the PCB
- Speaker output connector
- Audio traces routed away from motor wiring to reduce noise

### Motor Control
- IRLZ44N MOSFET
- Flyback diode
- PWM control from ESP32
- Motor connector

### Servo
- 3-pin servo header (5V, GND, Signal)
#### User Controls
- Headers or footprints for:
 - Play/Pause
 - Previous
 - Next
 - power
- status LED
- Power LED

### Power
- 5V barrel jack input
- Power switch
- Reverse polarity protection
- Decoupling capacitors near all ICs
- Large bulk capacitor on the 5V rail

### PCB Design Goals
- Two-layer PCB
- Large ground plane on both layers
- Wide traces for motor, amplifier, and power
- Separate high-current and signal routing where possible
- Mounting holes for enclosure
- JST or pin-header connectors for removable components
- Silkscreen labels for every connector and pin