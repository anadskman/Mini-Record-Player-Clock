# Mini Record Player Clock

A compact desktop Bluetooth speaker and clock inspired by a vintage record player. The aim of this project is to combine a functional Bluetooth speaker and Wi-Fi clock into a clean, fully 3D printed desktop display. Rather than using lots of jumper wires and modules glued together, everything is connected through a custom PCB designed specifically for this project.

The record spins while music is playing, the tonearm moves using a servo, and the front display shows the current time synced over Wi-Fi. All electronics are housed inside a custom enclosure designed in Fusion 360.

## Features

- Bluetooth music playback
- Wi-Fi synced digital clock
- 2.4" ILI9341 colour TFT display
- Spinning 3D printed record
- Servo driven moving tonearm
- Physical playback buttons
- Custom PCB
- Fully 3D printed enclosure
- Powered by a 5V wall adapter

## Hardware

### Electronics

- ESP32 Dev Board
- 2.4" ILI9341 TFT Display
- PAM8403 Audio Amplifier
- 4Ω 3W Speaker
- 5V DC Motor
- SG90 Servo
- IRLZ44N MOSFET
- 1N5819 Diodes
- Push Buttons
- LEDs
- Capacitors and Resistors
- Custom PCB

### Mechanical

- Fully 3D printed enclosure
- 3D printed record
- 3D printed tonearm
- Motor mount
- Hinged lid
- PCB mounting system
- M2 hardware

## Software

The ESP32 is responsible for controlling the entire project. It handles Bluetooth audio, synchronises the clock over Wi-Fi, updates the display, controls the spinning record and tonearm, and reads the playback buttons.

The firmware is written using the Arduino framework and is designed so each part of the project works independently while sharing the same controller.

## PCB

A custom two-layer PCB was designed in KiCad to act as the hub of the project. All components connect directly to the PCB which keeps the wiring simple and makes assembly much cleaner.

Some design considerations included:

- Ground planes on both PCB layers
- Wider traces for power distribution
- Decoupling capacitors placed beside each module
- Reverse polarity protection
- Clearly labelled connectors
- Connectors for external buttons, speaker and servo
- Mounting holes for the enclosure

## CAD

The enclosure was designed in Fusion 360 around the PCB to ensure everything fits correctly.

The design includes:

- Front display opening
- Side mounted playback buttons
- Speaker openings
- Hinged top lid
- Motor mount
- Servo mount
- PCB mounting points
- Rear barrel jack opening

## BOM

| Component | Cost | Status |
|---|---:|---|
| TFT Display 2.4" ILI9341 | $4.01 | Buy |
| 4Ω 3W Speaker | $2.09 | Buy |
| Screw Terminal (7x) | Owned | Owned |
| DC Barrel Jack | Owned | Owned |
| LEDs (2x) | Owned | Owned |
| MOSFET | Owned | Owned |
| Header Pins | Owned | Owned |
| PAM8403 Amplifier Module | $4.02 | Buy |
| DC Motor | Owned | Owned |
| SG90 Servo Motor | Owned | Owned |
| 100µF Capacitors | Owned | Owned |
| 100nF Ceramic Capacitors | Owned | Owned |
| 470µF Capacitor | $8.65 | Buy |
| 10µF Capacitors | $2.13 | Buy |
| 1µF Capacitors | $2.08 | Buy |
| Resistors | Owned | Owned |
| 1N5819 Diodes | $4.35 | Buy |
| Push Buttons | Owned | Owned |
| ESP32 Dev Board | $4.40 | Buy |
| 5V 5A Barrel Jack Power Supply | $9.43 | Buy |
| PCB | $27.77 | Buy |
| M2 Screws | $5.40 | Buy |
| Pin Headers (ESP32) | $6.06 | Buy |
| Shipping | $1.63 | |
| Duties | $33.01 | |
| Total | $115.03 | |

## Images
| Schematic | PCB | CAD |
| :---: | :---: | :---: |
| <img width="1603" height="893" alt="Screenshot 2026-07-13 215226" src="https://github.com/user-attachments/assets/0d2ecef9-6e62-489f-8142-ce2d6f2ffd8d" /> | <img width="1221" height="1189" alt="Screenshot 2026-07-13 215248" src="https://github.com/user-attachments/assets/dd9f2ab0-730a-4669-8806-8dc92bbbbcb0" /> | <img width="2557" height="1439" alt="Screenshot 2026-07-13 211552" src="https://github.com/user-attachments/assets/b2838d1f-9460-4f28-9157-ea7b112b237c" /> |
