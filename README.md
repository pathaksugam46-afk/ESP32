<p align="center">
  <img height="200px" width="200px" border_radius="10" src="https://github.com/user-attachments/assets/f1e593d5-194d-4e3d-8bc5-2a37b6e673dc" alt="ESP32 Development Board Banner" width="900">
</p>

<h1 align="center">ESP32 Development Board with 10 Onboard LEDs</h1>

<p align="center">
A compact, beginner-friendly ESP32 development board designed for learning, prototyping, robotics, and IoT applications.
</p>

<p align="center">
<img src="https://img.shields.io/badge/ESP32-WROOM-blue">
<img src="https://img.shields.io/badge/Platform-Arduino_IDE-green">
<img src="https://img.shields.io/badge/Platform-PlatformIO-orange">
<img src="https://img.shields.io/badge/License-MIT-red">
</p>

---

# Overview

This project is a custom ESP32 development board built with simplicity and usability in mind.

Unlike most ESP32 development boards that only include a single onboard LED, this board features **10 programmable LEDs**, making it much easier for beginners to learn GPIO programming without needing external components.

The board also includes a dedicated LED strip connector, making it suitable for lighting projects, robotics, and IoT applications.

Whether you're a student, hobbyist, or developer, this board provides an easy way to prototype and experiment with the ESP32.

---

# ESP32 Consist of

- ESP32-WROOM Module
- 10 User Programmable LEDs
- USB Programming
- Reset Button
- Boot Button
- Power Indicator LED
- GPIO Breakout Headers
- Compatible with Arduino IDE
- Compatible with PlatformIO
- Compatible with ESP-IDF

---

# 3D Preview

<p align="center">
<img width="1212" height="767" alt="Screenshot 2026-09-07 231923" src="https://github.com/user-attachments/assets/abaeb616-f0f3-45f5-b96d-031a3cc3a582" />
</p>

<p align="center">
Front 3D View
</p>

---

# PCB Layout

<p align="center">
<img width="1540" height="848" alt="Screenshot 2026-09-07 231726" src="https://github.com/user-attachments/assets/a1800b0e-4fd4-46e8-8716-6dd12154bbf7" />

</p>

---

# Schematic

<p align="center">
<img src="https://github.com/user-attachments/assets/689ea426-b35a-4166-972f-a27f59292df6" width="950">
</p>

---

# BOM
 build of material file is in inside the esp32 file 


# Why 10 Onboard LEDs?

Most ESP32 boards include only one LED.

This board integrates ten programmable LEDs directly onto the PCB, allowing users to:

- Learn GPIO programming
- Test outputs instantly
- Build LED animations
- Create binary counters
- Experiment without breadboards
- Reduce external wiring

This makes the board especially useful for beginners and classroom environments.


# Getting Started

## Arduino IDE

1. Install the ESP32 Board Package.
2. Connect the board via USB.
3. Select the correct COM Port.
4. Choose **ESP32 Dev Module**.
5. Upload your code.

---

## PlatformIO

Example `platformio.ini`

```ini
[env:esp32dev]
platform = espressif32
board = esp32dev
framework = arduino
monitor_speed = 115200
```

---

# Example Code

```cpp
const int leds[] = {2,4,5,12,13,14,15,18,19,21};

void setup()
{
    for(int i=0;i<10;i++)
        pinMode(leds[i], OUTPUT);
}

void loop()
{
    for(int i=0;i<10;i++)
    {
        digitalWrite(leds[i], HIGH);
        delay(120);

        digitalWrite(leds[i], LOW);
    }
}
```
# Design Considerations

During the PCB design process, the focus was on creating a compact, clean, and beginner-friendly layout. Components were arranged to minimize routing complexity while keeping all important GPIOs easily accessible.

The board was designed by following Espressif's official hardware recommendations to ensure reliable operation and good PCB design practices.

---


# References

The schematic and PCB layout were designed with guidance from Espressif's official documentation.

- ESP32 Hardware Design Guidelines  
  https://docs.espressif.com/projects/esp-hardware-design-guidelines/en/latest/esp32/

- ESP32 Schematic Checklist  
  https://docs.espressif.com/projects/esp-hardware-design-guidelines/en/latest/esp32/schematic-checklist.html

---

---

# Contributing

Contributions are welcome! If you find a bug, have a suggestion, or want to improve this project, feel free to open an issue or submit a pull request.

---

# Contact

**Sugam Pathak (Sangam)**

📧 Email: pathaksugam46@gmail.com

📱 Phone: +977 9766298480

💼 LinkedIn: https://www.linkedin.com/in/sugam-pathak-a2761b41a/

💬 Hack Club Slack: https://hackclub.enterprise.slack.com/team/U0A0ZST24CF

# License

This project is licensed under the MIT License.

---

# Author

**Sugam Pathak(SANGAM)**
MADE FOR HACK CLUB
