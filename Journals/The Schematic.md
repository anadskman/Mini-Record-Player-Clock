# Schematic
***(3hr)***

I started by placing all the components *(Or their headers)*

#### ESP32
- `DEVKIT_V1_ESP32-WROOM-32`*(imported as the actual board wasnt on kicad)*

#### Power
- `DC Barrel Jack`*(I must make sure when choosing footprints I select a big enough holes for my barrel jack, my last one was too small)*
- x2 `PWR_FLAG` 
- `+5V` `GND`
- `Device:C_Polarized` *(470uF)*
- `Device:C` *(100nF)*
- `Device:C_Polarized` *(10uF)*
- `Switch:SW_SPST`
- `Diode:ss14`

#### Audio
- `Connector:Conn_01x09_Socket`
  - `Device:C` *(100nF)*
  - `Device:C_Polarized` *(10uF)*

#### Motor
- `Connector:Conn_01x02_Socket`
- `Transistor_FET:IRLZ44N`
- `Device:R` *(220R)*
- `Device:R` *(10K)*
- `1N5819`
- `Device:C_Polarized` *(100uF)*
- `Device:C` *(100nF)*

#### Speaker
- `Connector:Conn_01x02_Socket`

#### Servo
- `Connector:Conn_01x03_Pin`
- `Device:C_Polarized` *(100uF)*
- `Device:C` *(100nF)*

#### Display
- `Connector:Conn_01x14_Socket`
- x1 `Device:C` *(100nF)*
- `Device:C_Polarized` *(10uF)*

#### Buttons
- x3 `Switch:SW_Push`

#### LEDs
- x2 `Device:LED`
- x2 `Device:R` *(330R)*

#### Mounting holes
- x4 `Mechanical:MountingHole`

While I placing everything I added text to help keep everything tidy.

![Screenshot](Images/screenshot_20260711_133626.png)


After I placed everything I did a quick sanity check and realised I forgot to add a few capacitors.

I started with all the power wiring first
I did wire the mosfet though, and the servo.

*(On my PCB I need to make sure my connectors line up, for e.g. gnd 5v and signal are in the correct place for servo)*



![Screenshot](Images/screenshot_20260711_142007.png)


After those were wired I connected the Speaker to the audio amp, the LEDs to the esp32, and the Buttons to the esp32.

After they were connected I ran a quick ERC.



![Screenshot](Images/screenshot_20260711_144542.png)

Before I moved on to the pcb I made sure everything was connected correctly, basically a sanity check, after that I also sent a Screenshot into #hardware to see if anyone spot anything wrong

Once everything seemed fine I annotated it and that was the schematic done.

I ended up change the buttons from being on the pcb, to be on the case instead so I replaced their footprints with `Connector_Generic:Conn_01x02`

I also found a symbol and footprint on github for pam8403 so i download it and replace my 01x09 connector with it.

# Footprints

After I annotated the schematic I assigned the footprints.

- `DEVKIT_V1_ESP32-WROOM-32:MODULE_DEVKIT_V1_ESP32-WROOM-32`
- `Connector_BarrelJack:BarrelJack_Horizontal` *(I measured my barrel Jack and made sure that it would fit)*
- `Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Horizontal`
- `Capacitor_THT:CP_Radial_D5.0mm_P2.00mm`
- `Capacitor_THT:CP_Radial_D6.3mm_P2.50mm`
- `Capacitor_THT:CP_Radial_D8.0mm_P3.50mm`
*(I'll double check that my caps fit these footprints)*
- x2 `TerminalBlock_Phoenix:TerminalBlock_Phoenix_MPT-0,5-2-2.54_1x02_P2.54mm_Horizontal`
- `Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical`
- `Connector_PinHeader_2.54mm:PinHeader_1x14_P2.54mm_Vertical`
- `Package_TO_SOT_THT:TO-220-3_Vertical`
- `Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal`

![Screenshot](Images/screenshot_20260711_171110.png)

