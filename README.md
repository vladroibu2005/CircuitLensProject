# AI-Powered Portable Electronics Inspection & Diagnostic Tool

A portable embedded system designed to use **computer vision and AI to inspect electronic boards, identify components, and assist with visual diagnostics**.

The system is built around the **Arduino UNO Q 4GB**, combining embedded Linux, AI/computer vision, real-time microcontroller control, sensors, and custom hardware into a single portable device.

> **From visual inspection to intelligent electronics diagnostics.**

---

## 🎯 Project Overview

Electronic boards can contain dozens or hundreds of components, making visual inspection time-consuming and difficult to perform manually.

This project aims to develop a compact device that can **look at an electronic board through a camera and automatically extract useful information from it**.

The long-term goal is to combine:

**Camera → Computer Vision → AI → Analysis → Diagnostic Assistance**

The system will initially focus on visual inspection of PCBs and electronic components, with the possibility of extending the platform toward more advanced diagnostic functionality.

### Potential capabilities

* Component detection and identification
* PCB and component localization
* Visual inspection of component placement
* Detection of missing components
* Detection of potentially misplaced components
* PCB layout comparison
* Reading component markings
* Visual identification of damaged components
* Assisted troubleshooting

The project is an experimental platform and is **not intended to replace professional electrical test equipment or industrial AOI systems**.

---

# 🧠 System Architecture

The system takes advantage of the two computing environments available on the Arduino UNO Q.

```text
                         ┌───────────────────┐
                         │   Electronic PCB  │
                         └─────────┬─────────┘
                                   │
                                   ▼
                         ┌───────────────────┐
                         │      Camera       │
                         └─────────┬─────────┘
                                   │
                                   ▼
              ┌────────────────────────────────────┐
              │         Qualcomm QRB2210           │
              │             Debian Linux            │
              │                                    │
              │  • Image acquisition               │
              │  • OpenCV                          │
              │  • Computer Vision                 │
              │  • AI / ML inference               │
              │  • Image analysis                  │
              │  • Diagnostic logic                │
              └────────────────┬───────────────────┘
                               │
                         Linux ↔ STM32
                               │
                               ▼
              ┌────────────────────────────────────┐
              │             STM32U585              │
              │                                    │
              │  • Sensor acquisition              │
              │  • Lighting control                 │
              │  • Motors / actuators               │
              │  • GPIO / PWM / ADC                │
              │  • Real-time hardware control      │
              └────────────────────────────────────┘
```

The **QRB2210/Linux side** is intended for computationally intensive tasks, while the **STM32U585** handles hardware-level and real-time operations.

---

# 🔍 Inspection Workflow

A typical inspection could eventually follow this pipeline:

```text
        PCB placed in device
                  │
                  ▼
           Image capture
                  │
                  ▼
          Image preprocessing
                  │
                  ▼
          PCB detection
                  │
                  ▼
       Component detection
                  │
                  ▼
       Component classification
                  │
                  ▼
       Layout / reference comparison
                  │
                  ▼
        Potential anomalies
                  │
                  ▼
       Diagnostic information
```

The system will be developed incrementally, beginning with simple visual detection and gradually adding more advanced analysis.

---

# 🤖 AI & Computer Vision

The project will explore both **traditional computer vision** and **AI-based approaches**.

### Classical Computer Vision

Potential techniques include:

* Image filtering
* Thresholding
* Edge detection
* Contour detection
* Morphological operations
* Perspective correction
* Template matching
* Geometric analysis

### AI-Based Vision

Potential applications include:

* Object detection
* Component classification
* PCB feature detection
* Anomaly detection
* OCR / component marking recognition
* Image classification

The final approach will be selected based on the performance and requirements of the actual hardware.

---

# 🧩 What Could Be Detected?

The initial target is to identify common electronic components and PCB features.

Possible targets include:

| Category           | Examples                                 |
| ------------------ | ---------------------------------------- |
| Passive components | Resistors, capacitors, inductors         |
| ICs                | Integrated circuits                      |
| Connectors         | Headers, USB connectors, terminals       |
| Semiconductors     | Diodes, transistors                      |
| PCB features       | Pads, traces, mounting holes             |
| Markings           | Component labels, reference designators  |
| Anomalies          | Missing or incorrectly placed components |

The exact detection capabilities will depend on the models, camera, lighting, and image quality developed during the project.

---

# 🩺 Diagnostic Assistance

One of the long-term goals is to move beyond simple object detection.

Instead of only answering:

> **"What components are on this PCB?"**

the system could eventually help answer:

> **"Does this PCB appear to match the expected configuration?"**

For example:

```text
Reference PCB
      │
      ▼
Expected component layout
      │
      │
      ▼
┌─────────────────┐
│     AI Vision   │
└────────┬────────┘
         │
         ▼
Actual PCB image
         │
         ▼
Comparison
         │
         ▼
Potential differences
```

Possible results could include:

* Missing component
* Unexpected component
* Incorrect placement
* Different component orientation
* Visible physical damage
* Uncertain / requires manual inspection

These results would be treated as **diagnostic assistance**, not as definitive electrical diagnoses.

---

# 🖥️ Hardware Platform

## Arduino UNO Q 4GB

The main computing platform is the **Arduino UNO Q 4GB**.

It combines:

### Qualcomm QRB2210

* Quad-core ARM Cortex-A53
* Debian Linux
* GPU acceleration
* High-level application processing
* Computer vision and AI workloads

### STM32U585

* ARM Cortex-M33
* Real-time microcontroller
* GPIO
* PWM
* ADC
* I²C
* SPI
* UART
* CAN

This architecture makes the UNO Q particularly interesting for combining **embedded control with Linux-based AI workloads**.

---

# 📷 Camera

The camera is one of the most important components of the system.

The project will investigate camera characteristics such as:

* Resolution
* Frame rate
* Focus
* Working distance
* Field of view
* Image quality
* Low-light performance

Controlled illumination will also be investigated because PCB inspection can be highly dependent on lighting conditions.

---

# 💡 Controlled Illumination

PCB components can produce reflections and shadows that make computer vision more difficult.

The final device may therefore include controlled lighting around the inspection area.

```text
          ┌───────────────────┐
          │     CAMERA        │
          │        ▼          │
          │       📷          │
          │                   │
          │   💡       💡     │
          │                   │
          │      ┌─────┐      │
          │      │ PCB │      │
          │      └─────┘      │
          └───────────────────┘
```

Lighting intensity and configuration could potentially be controlled by the STM32.

---

# 🏗️ Physical Design

The device is intended to become a **portable, self-contained inspection tool** rather than a collection of components on a breadboard.

The enclosure concept was initially developed in **Autodesk Fusion**.

The planned enclosure can accommodate:

* Camera
* Display
* User controls
* UNO Q
* Custom electronics
* PCB inspection area
* Lighting
* Power system

The mechanical design will evolve together with the electronics.

---

# 🔌 Custom Hardware

A custom PCB is planned for the final prototype.

Potential functions include:

* Power distribution
* Sensor connections
* Lighting control
* Actuator drivers
* User interface
* Communication interfaces
* Peripheral connections

The PCB will be designed after the main system architecture and component requirements have been validated experimentally.

---

# 🛠️ Software Stack

## Linux / Application Processor

Potential technologies:

* Debian Linux
* Python
* OpenCV
* Machine Learning frameworks
* Computer Vision libraries
* OCR tools
* Linux system utilities

## STM32 / Embedded Controller

Potential technologies:

* C/C++
* Arduino / Zephyr
* GPIO
* PWM
* ADC
* I²C
* SPI
* UART
* CAN

---

# 🚧 Development Roadmap

## Phase 1 — Platform Setup

* [x] Project concept
* [x] Initial Fusion enclosure concept
* [x] Arduino UNO Q 4GB hardware award
* [ ] Receive UNO Q
* [ ] Set up Linux environment
* [ ] Test STM32 environment
* [ ] Establish communication between the two processing environments

## Phase 2 — Camera System

* [ ] Select camera
* [ ] Camera integration
* [ ] Test image quality
* [ ] Determine optimal inspection distance
* [ ] Experiment with lighting
* [ ] Capture PCB image dataset

## Phase 3 — Computer Vision

* [ ] PCB detection
* [ ] Image preprocessing
* [ ] Component detection
* [ ] Component localization
* [ ] Component classification
* [ ] Perspective correction
* [ ] Experiment with OCR

## Phase 4 — AI

* [ ] Create / collect training dataset
* [ ] Train detection model
* [ ] Test inference on UNO Q
* [ ] Measure inference performance
* [ ] Optimize model for edge deployment

## Phase 5 — Diagnostic Assistance

* [ ] Define reference PCB configuration
* [ ] Compare expected vs. detected components
* [ ] Detect missing components
* [ ] Investigate placement errors
* [ ] Investigate visual damage detection
* [ ] Generate inspection results

## Phase 6 — Embedded Hardware

* [ ] Integrate sensors
* [ ] Implement controlled illumination
* [ ] Add user interface
* [ ] Integrate actuators if required
* [ ] Design custom PCB

## Phase 7 — Final Prototype

* [ ] Manufacture PCB
* [ ] Assemble electronics
* [ ] Complete enclosure
* [ ] Integrate all subsystems
* [ ] Test complete device
* [ ] Measure system performance
* [ ] Document final results

---

# 📊 Project Status

**🚧 Early Development**

The project currently represents the initial concept and architecture.

The first development stage will focus on getting the UNO Q, camera, Linux environment, and basic computer vision pipeline working before implementing the more ambitious diagnostic features.

As development progresses, this README will be updated with:

* Hardware schematics
* PCB designs
* CAD models
* Photos
* Computer vision experiments
* AI models
* Detection results
* Performance measurements
* Videos of the prototype

---

# 🏆 Project Origin

This project was originally developed as a concept for the **Autodesk University 2027 Product Contest**.

The concept proposed a portable electronics inspection device built around the Arduino UNO Q, with a camera, display, controls, internal electronics, and a custom enclosure.

The project was selected for an **Arduino UNO Q 4GB hardware award**, providing the main computing platform for development.

---

# 📁 Repository Structure

```text
AI-Electronics-Inspection/
│
├── linux/
│   ├── vision/
│   ├── ai/
│   ├── ocr/
│   └── communication/
│
├── stm32/
│   ├── src/
│   ├── include/
│   └── drivers/
│
├── hardware/
│   ├── pcb/
│   ├── schematics/
│   └── bom/
│
├── enclosure/
│   ├── fusion/
│   └── exported/
│
├── datasets/
│
├── docs/
│
├── tests/
│
└── README.md
```

---

# 👤 Author

**Vlad Roibu-Constantin**

Electronică Aplicată
Universitatea Politehnica Timișoara

### Interests

* Embedded Systems
* Computer Vision
* Edge AI
* Electronics
* PCB Design
* Python & C/C++
* Robotics

---

## Project Philosophy

This project is being developed through experimentation:

**Build → Test → Measure → Understand → Improve**

The goal is not only to create a working device, but to understand how **AI, computer vision, embedded Linux, microcontrollers, electronics, and mechanical design can be combined into a complete embedded product.**
