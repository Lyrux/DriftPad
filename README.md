# DriftPad

DriftPad is a custom Hall-effect macropad built around analog magnetic key sensing. The project is designed to support adjustable actuation and release points, rapid-trigger-style behavior, an OLED interface, and rotary encoder input on a custom PCB.

> **Status:** In development. Hardware design is underway and firmware development has started.

## Features

- Hall-effect analog key sensing
- Adjustable actuation and release points
- Rapid-trigger-style key behavior
- OLED display for real-time status and configuration
- Rotary encoder input
- Custom PCB design
- Custom 3D-printed enclosure
- Raspberry Pi Pico / RP2040-based firmware development

## Project Goals

DriftPad is intended to explore the full design of a custom input device, including:

- PCB schematic and layout design
- Analog Hall-effect sensor integration
- Embedded firmware development
- USB keyboard/HID behavior
- OLED user interface design
- Rotary encoder input handling
- Mechanical enclosure design and prototyping

## Repository Structure

```text
DriftPad/
├── firmware/        # PlatformIO firmware project
├── hardware/        # PCB and mechanical design files
├── docs/            # Documentation and diagrams
├── media/           # Photos, renders, and project media
├── README.md
└── LICENSE
```

### Firmware

The firmware is currently being developed with PlatformIO for the Raspberry Pi Pico / RP2040.

```text
firmware/
├── include/
├── lib/
├── src/
├── test/
└── platformio.ini
```

Planned firmware components include:

- Hall-effect sensor sampling and calibration
- Adjustable actuation thresholds
- Adjustable release thresholds
- Rapid-trigger logic
- Keyboard/HID output
- OLED display control
- Rotary encoder handling
- Profiles and configuration settings

### Hardware

The hardware portion of the project includes:

- KiCad schematics
- PCB layout
- Custom footprints and symbols where required
- Manufacturing files
- 3D-printable enclosure parts
- STL and related mechanical design files

A planned organization is:

```text
hardware/
├── kicad/
├── mechanical/
    ├── stl/
    └── step/
```

## Hardware Platform

Current development is based around the **Raspberry Pi Pico / RP2040**.

The RP2040 will handle:

- Analog sensor acquisition
- Key state processing
- USB HID communication
- OLED updates
- Rotary encoder input
- User configuration

## Hall-Effect Key Sensing

Unlike a traditional mechanical keyboard switch that provides a simple digital on/off signal, DriftPad uses Hall-effect sensors to measure the position of each key magnetically.

This allows the firmware to determine key travel continuously and implement features such as:

- User-adjustable actuation distance
- User-adjustable release distance
- Dynamic key reset behavior
- Rapid-trigger-style input

## OLED Display

The OLED is intended to provide real-time visual feedback such as:

- Active profile or layer
- Actuation settings
- Key status
- Configuration menus
- Simple graphics and animations

## Rotary Encoder

The rotary encoder will provide an additional input method for functions such as:

- Volume control
- Menu navigation
- Profile selection
- Configuration adjustment

Its exact behavior may evolve as the firmware develops.

## Development

Firmware development is being done in **Visual Studio Code** using **PlatformIO**.

To open the firmware project:

```bash
cd firmware
code .
```

PlatformIO uses the configuration in:

```text
firmware/platformio.ini
```

Build artifacts generated inside `.pio/` are not tracked by Git.

## Current Progress

- [x] Project concept and feature planning
- [x] KiCad schematic development
- [x] PCB design
- [x] Mechanical / STL design
- [x] PlatformIO firmware project setup
- [ ] Hall-effect sensor firmware
- [ ] Sensor calibration system
- [ ] Keyboard/HID implementation
- [ ] Adjustable actuation logic
- [ ] Rapid-trigger logic
- [ ] OLED interface
- [ ] Rotary encoder integration
- [ ] Hardware bring-up and testing
- [ ] Final enclosure and assembly
- [ ] Performance testing and documentation

## Planned Documentation

As development continues, this repository will include additional documentation covering:

- System architecture
- PCB design decisions
- Hall-effect calibration
- Firmware architecture
- Actuation and rapid-trigger algorithms
- Hardware bring-up
- Testing and performance measurements
- Final assembly

## License

See [LICENSE](LICENSE) for licensing information.
