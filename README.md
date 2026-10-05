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

To solve that, I designed a board with **10 programmable LEDs** already connected to different GPIO pins. **All 10 LEDs are mounted on the back side (bottom layer) of the PCB**, keeping the front side clean while still allowing easy testing and programming. This lets you test outputs, learn programming, and build simple LED projects without needing a breadboard.

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
---

##  Bill of Materials (BOM)

| Qty | Component | Designator | LCSC Link | Unit Price (USD) | Total (USD) |
|---:|---|---|---|---:|---:|
| 8 | 100nF Capacitor | C1, C2, C5, C11, C12, C14, C15, C16 | https://www.lcsc.com/product-detail/C1525.html | $0.0007 | $0.0056 |
| 2 | 22uF Capacitor | C3, C4 | https://www.lcsc.com/product-detail/C602037.html | $0.0252 | $0.0504 |
| 1 | 4.7uF Capacitor | C7 | https://www.lcsc.com/product-detail/C368809.html | $0.0026 | $0.0026 |
| 2 | 10uF Capacitor | C10, C13 | https://www.lcsc.com/product-detail/C315248.html | $0.0045 | $0.0090 |
| 1 | 1×2 Pin Header (DZ127R-11-02-25) | H1 | https://www.lcsc.com/product-detail/C2935942.html | $0.0024 | $0.0024 |
| 1 | Boot Switch (B-2101S03P-A110) | H2 | https://www.lcsc.com/product-detail/C124354.html | $0.0065 | $0.0065 |
| 10 | 0402 Red LEDs | LED1–LED10 | — | — | — |
| 2 | SS8050-G NPN Transistor | Q1, Q4 | https://www.lcsc.com/product-detail/C3199946.html | $0.0091 | $0.0182 |
| 2 | 2N7002 MOSFET | Q2, Q3 | https://www.lcsc.com/product-detail/C139445.html | $0.0162 | $0.0324 |
| 2 | 1kΩ Resistor | R1, R9 | https://www.lcsc.com/product-detail/C17513.html | $0.0007 | $0.0014 |
| 5 | 10kΩ Resistor | R7, R8, R14, R15, R18 | https://www.lcsc.com/product-detail/C25744.html | $0.0006 | $0.0030 |
| 2 | 10kΩ Precision Resistor | R10, R11 | https://www.lcsc.com/product-detail/C17414.html | $0.0005 | $0.0010 |
| 2 | 0Ω Jumper Resistor | R12, R13 | https://www.lcsc.com/product-detail/C17168.html | $0.0004 | $0.0008 |
| 3 | 22.1kΩ Resistor | R16, R19, R20 | https://www.lcsc.com/product-detail/C43473.html | $0.0003 | $0.0009 |
| 1 | 47.5kΩ Resistor | R17 | https://www.lcsc.com/product-detail/C325696.html | $0.0005 | $0.0005 |
| 2 | Tactile Push Button | SW1, SW3 | https://www.lcsc.com/product-detail/C221869.html | $0.0622 | $0.1244 |
| 1 | ESP32-WROOM-32 Module | U1 | https://www.lcsc.com/product-detail/C701341.html | $0.5616 | $0.5616 |
| 1 | CP2102N USB-UART | U2 | https://www.lcsc.com/product-detail/C1550553.html | $0.2382 | $0.2382 |
| 1 | AMS1117-3.3 Voltage Regulator | U3 | https://www.lcsc.com/product-detail/C347222.html | $0.0073 | $0.0073 |
| 3 | ESD Protection Diode | U6, U7, U8 | https://www.lcsc.com/product-detail/C7433850.html | $0.0024 | $0.0072 |
| 2 | RGB LED | U9, U10 | https://www.lcsc.com/product-detail/C6679547.html | $0.1201 | $0.2402 |
| 2 | Crystal Oscillator | U11, U12 | https://www.lcsc.com/product-detail/C5243697.html | — | — |
| 1 | USB Type-C Connector | USB1 | https://www.lcsc.com/product-detail/C136000.html | $0.0731 | $0.0731 |
| **—** | **Total Component Cost (priced items only)** | **—** | **—** | **—** | **≈ $1.3867 USD** |

> **Note:** Components with **—** do not have a listed JLCPCB/LCSC price and are **not included** in the total cost. PCB fabrication, assembly, and shipping costs are also excluded.


# Manufacturing Cost

| Item | Cost (USD) |
|------|-----------:|
| PCB Fabrication | $4.00 |
| PCBA Assembly | $68.57 |
| **Estimated Total Cost** | **$72.57** |

---

# Tools Required for PCB Assembly

| Tool | Purpose |
|------|---------|
| Soldering Station | Solder through-hole and SMD components |
| Hot Air Rework Station *(Recommended)* | Install and remove SMD ICs |
| Solder Wire | Create electrical solder joints |
| Solder Paste | Assemble SMD components |
| Flux Paste | Improve solder flow and reduce oxidation |
| Fine Tip Tweezers | Place small SMD components |
| Digital Multimeter | Test continuity, voltage, and shorts |
| PCB Holder / Helping Hands | Hold the PCB during assembly |
| Desoldering Wick | Remove excess solder |
| Solder Pump | Remove solder from through-hole components |
| Side Cutter | Trim component leads |
| Isopropyl Alcohol (IPA) | Clean flux residue |
| Cotton Swabs / Cleaning Brush | PCB cleaning |
| ESD Wrist Strap | Protect components from static electricity |
| Magnifying Glass / Microscope | Inspect solder joints |
| USB-C Cable | Program and power the board |

---

# Software Used

- EasyEDA Pro
- Arduino IDE
- PlatformIO
- ESP-IDF *(Optional)*

---
# 3D Preview Front

<p align="center">
<img width="1311" height="677" alt="Screenshot 2026-09-30 183807" src="https://github.com/user-attachments/assets/855bf568-4987-48e3-adcf-c03e167db7df" />


</p>

<p align="center">
Final 3D PCB Design
</p>


# 3D Preview Back

<p align="center">
<img width="1020" height="557" alt="Screenshot 2026-09-30 185404" src="https://github.com/user-attachments/assets/26ca2b71-296b-4697-bd27-8e67cd79478d" />


</p>

<p align="center">
Final 3D PCB Design
</p>

---

# PCB Layout

<p align="center">

<img width="860" height="460" alt="Screenshot 2026-09-30 182025" src="https://github.com/user-attachments/assets/1a3ca18c-9bf3-4fd5-b921-28100707ae69" />

</p>

---

# 2D

<p align="center">
<img width="1217" height="617" alt="Screenshot 2026-09-30 184435" src="https://github.com/user-attachments/assets/e7c60683-7a5f-4c59-a69c-e7e6974fc4a9" />


</p>

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
