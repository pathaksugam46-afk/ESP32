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
---

# Bill of Materials (BOM)

| Qty | Component | Manufacturer Part |
|----:|-----------|-------------------|
| 1 | ESP32-WROOM-32E Module | ESP32-WROOM-32E-N4 |
| 1 | USB to UART IC | CP2102N-A02-GQFN28 |
| 1 | 3.3V Voltage Regulator | AMS1117-3.3 |
| 1 | USB-C Connector | 1050170001 |
| 10 | 0402 LEDs | LED_0402-R |
| 8 | 100nF Ceramic Capacitors | CL05B104KO5NNNC |
| 2 | 22uF Ceramic Capacitors | CL21A226MAYNNNE |
| 2 | 10uF Ceramic Capacitors | CL05A106MP5NUNC |
| 1 | 4.7uF Ceramic Capacitor | CL05A475KP5NRNC |
| 2 | SS8050 NPN Transistors | SS8050-G |
| 2 | 2N7002 N-Channel MOSFETs | 2N7002T-7-F |
| 2 | 1kΩ Resistors | 0805W8F1001T5E |
| 7 | 10kΩ Resistors | 0402WGF1002TCE / 0805W8F1002T5E |
| 2 | 0Ω Jumpers | 0402WGF0000TCE |
| 3 | 22.1kΩ Resistors | 0402WGF2212TCE |
| 1 | 47.5kΩ Resistor | RMC060347.5K1%N |
| 2 | Push Buttons | PTS645SH50SMTR92LFS |
| 3 | ESD Protection Diodes | LESD5D5.0CT1G |
| 2 | Power Indicator LEDs | SM0805GC |
| 2 | Pin Headers | X1311WV-17J-C40D24 |
| 2 | Connectors | DZ127R-11-02-25, B-2101S03P-A110 |

---

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
