# CircuitLensProject
# UNO Q — Edge AI & Embedded Vision Platform

An embedded systems project built around the **Arduino UNO Q 4GB**, combining Linux, microcontroller control, computer vision, sensors, and custom hardware into a single experimental platform.

The project started as a concept developed for the **Autodesk University 2027 Product Contest** and will be progressively developed into a functional prototype.

## Overview

The goal of this project is to explore the capabilities of the Arduino UNO Q by combining its two computing environments:

* **Qualcomm QRB2210** — Linux-based application processor for high-level processing, computer vision, AI, networking, and data handling.
* **STM32U585** — microcontroller for real-time embedded control and interaction with sensors and actuators.

The final system is intended to act as a small **edge-computing and embedded vision platform**, where computationally intensive tasks can run on Linux while deterministic hardware control is handled by the STM32.

## Planned Features

The project will be developed incrementally. Planned functionality includes:

* 📷 Camera-based computer vision
* 🤖 Edge AI / machine learning experiments
* 🔌 Sensor integration
* ⚙️ Real-time actuator control
* 🖥️ Display and user interface
* 🌐 Network connectivity
* 🔄 Communication between Linux and the STM32
* 🔋 Hardware power management
* 🧩 Custom PCB development
* 🏠 Custom 3D-printed enclosure

The exact feature set may evolve during development as different hardware and software approaches are tested.

## System Architecture

```text
                  ┌─────────────────────────────┐
                  │        Arduino UNO Q        │
                  │                             │
                  │  ┌───────────────────────┐  │
                  │  │ Qualcomm QRB2210      │  │
                  │  │ Debian Linux          │  │
                  │  │                       │  │
Camera ──────────►│  │ Computer Vision       │  │
                  │  │ AI / ML               │  │
                  │  │ Networking            │  │
                  │  │ Data Processing       │  │
                  │  └───────────┬───────────┘  │
                  │              │              │
                  │       Linux ↔ MCU           │
                  │              │              │
                  │  ┌───────────▼───────────┐  │
Sensors ─────────►│  │ STM32U585              │  │
                  │  │ Real-Time Control      │  │
Actuators ◄───────│  │ GPIO / PWM / ADC       │  │
                  │  │ Embedded Logic         │  │
                  │  └───────────────────────┘  │
                  └─────────────────────────────┘
```

## Hardware

### Main Platform

* Arduino UNO Q 4GB
* External camera
* Sensors and modules
* Actuators
* Display
* Custom PCB
* Custom enclosure

Additional components will be added as the project develops.

## Software

The project is expected to use multiple software environments:

### Linux side

* Debian Linux
* Python
* OpenCV
* Machine learning / computer vision frameworks
* Linux command-line tools
* Networking and data-processing libraries

### Microcontroller side

* Arduino / Zephyr-based development
* C/C++
* STM32 peripherals
* GPIO
* PWM
* ADC
* I²C
* SPI
* UART
* CAN

## Development Approach

The project is being developed incrementally rather than as a single large implementation.

Each stage follows a simple workflow:

```text
Hardware
   ↓
Basic test
   ↓
Software implementation
   ↓
Integration
   ↓
Experiment
   ↓
Optimization
   ↓
Final prototype
```

This allows individual components to be tested independently before combining them into the complete system.

## Project Status

🚧 **In Development**

### Current status

* [x] Project concept
* [x] Initial enclosure concept
* [x] Hardware requirements identified
* [x] Arduino UNO Q hardware obtained through the Autodesk University 2027 Product Contest
* [ ] Receive and set up UNO Q
* [ ] Linux environment setup
* [ ] STM32 development setup
* [ ] Camera integration
* [ ] Computer vision experiments
* [ ] Sensor integration
* [ ] Linux ↔ STM32 communication
* [ ] Custom PCB
* [ ] Enclosure fabrication
* [ ] Full system integration

## Why UNO Q?

The UNO Q provides an interesting combination of **Linux computing and real-time microcontroller control on the same platform**.

Instead of using a separate computer for high-level processing and a microcontroller for hardware control, this project explores how both environments can work together.

This makes the board particularly interesting for applications involving:

* Edge AI
* Computer vision
* Robotics
* IoT
* Embedded Linux
* Industrial sensing
* Intelligent control systems

## Future Development

Possible future directions include:

* Real-time camera processing
* Object and gesture detection
* Sensor fusion
* Local AI inference
* Web-based monitoring
* Remote control
* Custom PCB with integrated sensors
* 3D-printed enclosure
* Standalone embedded operation

The final architecture will be determined through experimentation during development.

## Repository Structure

```text
UNO-Q-Edge-AI/
│
├── linux/
│   ├── vision/
│   ├── ai/
│   ├── communication/
│   └── utilities/
│
├── stm32/
│   ├── src/
│   ├── include/
│   └── drivers/
│
├── hardware/
│   ├── pcb/
│   ├── schematics/
│   └── enclosure/
│
├── docs/
│   ├── architecture/
│   └── images/
│
├── tests/
│
└── README.md
```

## Project Origin

This project was originally developed as a concept for the **Autodesk University 2027 Product Contest**.

The project received an **Arduino UNO Q 4GB hardware award**, providing the platform for further development and experimentation.

## Author

**Vlad Roibu-Constantin**

Electronică Aplicată — Universitatea Politehnica Timișoara

Interested in:

* Embedded Systems
* Computer Vision
* Edge AI
* Electronics
* PCB Design
* Python & C/C++
* Robotics

---

> **From concept to hardware, one experiment at a time.**
