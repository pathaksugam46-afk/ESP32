<p align="center">
  <img height="200px" width="200px" src="https://github.com/user-attachments/assets/f1e593d5-194d-4e3d-8bc5-2a37b6e673dc" alt="ESP32 Development Board">
</p>

<h1 align="center">ESP32 Development Board with 10 Onboard LEDs</h1>

<p align="center">
A custom ESP32 development board that I designed for learning, robotics, and IoT projects.
</p>

<p align="center">
<img src="https://img.shields.io/badge/ESP32-WROOM-blue">
<img src="https://img.shields.io/badge/Arduino-IDE-green">
<img src="https://img.shields.io/badge/PlatformIO-Supported-orange">
<img src="https://img.shields.io/badge/License-MIT-red">
</p>

---

# About the Project

This is my first custom ESP32 development board.

I wanted to build a board that would be easier for beginners to use. Most ESP32 boards only have one onboard LED, so every time you want to test another GPIO pin you need extra LEDs and jumper wires.

To solve that, I designed a board with **10 programmable LEDs** already connected to different GPIO pins. This lets you test outputs, learn programming, and build simple LED projects without needing a breadboard.

I also added a connector for an external LED strip so the board can be used in robotics and IoT projects.

Building this PCB taught me a lot about schematic design, PCB routing, component placement, and fixing design mistakes.

---

# Features

- ESP32-WROOM Module
- 10 Programmable LEDs
- USB Programming
- Reset Button
- Boot Button
- Power LED
- GPIO Headers
- LED Strip Connector
- Arduino IDE Support
- PlatformIO Support
- ESP-IDF Compatible

---
# Bill of Materials (BOM)

## JLCPCB Manufacturing Quote

| Item | Cost (USD) |
|------|-----------:|
| PCB Fabrication | $4.00 |
| PCBA Assembly | $68.57 |
| **Estimated Total Cost** | **$72.57** |


# 3D Preview

<p align="center">
<img width="1547" height="570" alt="Screenshot 2026-09-11 103920" src="https://github.com/user-attachments/assets/f6e3b277-7a4c-4979-b81b-2afbd5e51d19" />

</p>

<p align="center">
Final 3D PCB Design
</p>

---

# PCB Layout

<p align="center">
<img width="1312" height="502" alt="Screenshot 2026-09-11 103857" src="https://github.com/user-attachments/assets/ed5c6c48-f5e9-4ff4-b48a-faa89cd519e9" />

</p>

---

# Schematic

<p align="center">
<img src="https://github.com/user-attachments/assets/689ea426-b35a-4166-972f-a27f59292df6" width="900">
</p>

---

# Bill of Materials

The complete BOM is available in the **ESP32** folder of this repository.

---

# Why 10 LEDs?

I added 10 onboard LEDs because I wanted this board to be easier for beginners.

Instead of connecting LEDs with jumper wires every time, you can start testing GPIO pins immediately.

Some fun things you can try:

- LED blinking
- GPIO testing
- Running light effects
- Binary counters
- LED animations
- Learning arrays and loops
- Classroom demonstrations

---

# Getting Started

## Arduino IDE

1. Install the ESP32 board package.
2. Connect the board using USB.
3. Select the correct COM port.
4. Choose **ESP32 Dev Module**.
5. Upload your sketch.

---

## PlatformIO

```ini
[env:esp32dev]
platform = espressif32
board = esp32dev
framework = arduino
monitor_speed = 115200
```

---

# Example

```cpp
const int leds[] = {2,4,5,12,13,14,15,18,19,21};

void setup()
{
    for(int i = 0; i < 10; i++)
        pinMode(leds[i], OUTPUT);
}

void loop()
{
    for(int i = 0; i < 10; i++)
    {
        digitalWrite(leds[i], HIGH);
        delay(120);
        digitalWrite(leds[i], LOW);
    }
}
```

---

# What I Learned

This project helped me understand:

- Reading ESP32 reference schematics
- PCB routing
- USB connections
- Power supply design
- Component placement
---


# Contact

**Sugam Pathak**

pathaksugam46@gmail.com

LinkedIn  
https://www.linkedin.com/in/sugam-pathak-a2761b41a/

Hack Club Slack  
https://hackclub.enterprise.slack.com/team/U0A0ZST24CF


Made for Hack Club.
