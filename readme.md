# OpenJoint

**OpenJoint** is an open-source modular joint controller designed for robots, automation projects, and creative motion systems.  
It enables precise control of stepper motors with integrated feedback, easy programming, and scalable connectivity.

## ✨ Features

- **Stepper Motor Control**  
  - Drive stepper motors via TMC drivers (e.g., TMC2209, TMC5160, etc.).
  - Closed-loop feedback with magnetic encoders (like AS5048A, AS5600).

- **Programmable via USB Type-C**  
  - Plug-and-play programming using standard USB Type-C interface.
  - Compatible with ESP32 and STM32 microcontrollers.

- **Daisy Chain Architecture**  
  - Connect up to **10 nodes** on a single bus.
  - Shared power and communication across nodes.
  - Built-in CAN FD support for fast and robust communication.

- **Expandable Interfaces**  
  - Additional ports for extra sensors (IMU, force sensors, etc.) or custom communication modules (UART, SPI, I2C).

---

## 🛠 Hardware Overview

| Component           | Details                                     |
| ------------------- | ------------------------------------------- |
| **MCU Options**      | ESP32 (Wi-Fi/Bluetooth) or STM32 (robust, RT) |
| **Motor Driver**     | TMC series stepper motor driver (configurable) |
| **Feedback Sensor**  | Magnetic encoders (12-bit+ resolution)       |
| **Power Supply**     | 24V nominal, shared across all nodes         |
| **Communication**    | CAN FD bus with daisy-chain connectors       |
| **Programming Port** | USB Type-C (programming and debugging)       |

---

## 📦 Planned Deliverables

- Firmware examples for ESP32 and STM32.
- Open-source hardware schematics (KiCad, Altium, etc.).
- Driver libraries for encoder reading and motor control.
- Example project: 3-joint robotic arm using OpenJoint modules.

---

## License

[OpenJoint](https://github.com/Shrijal2410/OpenJoint) by [Shrijal](https://github.com/Shrijal2410) is licensed under [CC BY-NC-SA 4.0](https://creativecommons.org/licenses/by-nc-sa/4.0/?ref=chooser-v1) <img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1" alt=""><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg?ref=chooser-v1" alt=""><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/nc.svg?ref=chooser-v1" alt=""><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/sa.svg?ref=chooser-v1" alt=""></a></p>