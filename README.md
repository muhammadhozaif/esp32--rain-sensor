# Basic Rain Sensor Monitor

**Author:** Muhammad Hozaif
**Institution:** Quaid-i-Azam University, Islamabad

## Overview

This project is a simple hardware test to detect water using an ESP32 microcontroller and a YL-83 rain drop sensor. The system polls the sensor's digital output and logs the environmental state to the Arduino IDE's Serial Monitor.

## Hardware Requirements

* **ESP32 Development Board** * **Rain Drop Sensor Module (YL-83):** Includes a conductive sensing pad and a signal processing board.
* **Jumper Wires**
* **Micro-USB Cable**

## Software Requirements

* **Arduino IDE:** Used to compile, upload, and monitor the code.

## Circuit Connections

**1. ESP32 to Rain Drop Sensor Module:**

* **VCC:** Connect the 3.3V pin on the ESP32 to the VCC pin on the module (Red wire).
* **GND:** Connect the GND pin on the ESP32 to the GND pin on the module (Black wire).
* **Signal:** Connect digital GPIO pin D4 on the ESP32 to the D0 pin on the module (Grey wire).

**2. Rain Drop Sensor Module to YL-83 Sensing Board:**

* Connect the two terminals of the YL-83 sensing board to the corresponding inputs on the rain sensor module using the green and blue wires.

## Usage

1. Wire the components according to the circuit connections above.
2. Connect the ESP32 to your computer via USB.
3. Open `RainSensor.ino` in the Arduino IDE.
4. Select your ESP32 board and the correct COM port.
5. Click **Upload**.
6. Open the **Serial Monitor** in the Arduino IDE and set the baud rate to **115200**.
7. Place a drop of water on the YL-83 sensing pad. The Serial Monitor will output: `It's Raining`.

