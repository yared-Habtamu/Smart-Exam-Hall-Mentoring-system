# Smart Exam Hall Monitoring System

A simulation-based IoT project built using an ESP32 to monitor suspicious activities inside an exam hall environment. The system detects unusual sound levels and motion activity, then triggers alerts using an LED and buzzer.

The project also demonstrates ESP32 WiFi connectivity by connecting to a wireless network and displaying the assigned IP address through the Serial Monitor.

---

## Features

* Simulated motion detection
* Simulated sound monitoring
* Real-time alert system
* LED alert indicator
* Buzzer alarm notification
* ESP32 WiFi connectivity
* Serial Monitor logging
* Offline mode support if WiFi fails
* Wokwi simulation compatible

---

## Technologies Used

| Component            | Technology                                                               |
| -------------------- | ------------------------------------------------------------------------ |
| Microcontroller      | ESP32                                                                    |
| Programming Language | C++                                                                      |
| Simulation Platform  | [Wokwi Simulator](https://wokwi.com?utm_source=chatgpt.com)              |
| WiFi Library         | WiFi.h                                                                   |
| IDE                  | [Arduino IDE](https://www.arduino.cc/en/software?utm_source=chatgpt.com) |

---

## System Workflow

1. ESP32 starts the monitoring system
2. Device attempts to connect to WiFi
3. Random sensor values are generated for simulation
4. Motion and sound values are analyzed
5. If abnormal activity is detected:

   * LED turns ON
   * Buzzer activates
   * ALERT message appears
6. Otherwise:

   * System remains in normal state

---

## Hardware Components

* ESP32
* LED
* Buzzer
* WiFi connection
* Virtual sensors (simulation mode)

---

## Pin Configuration

| Component | ESP32 Pin |
| --------- | --------- |
| LED       | GPIO 2    |
| Buzzer    | GPIO 15   |

---

## WiFi Configuration

Update the WiFi credentials in the code:

```cpp id="xt2t5n"
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";
```

---

## Installation & Setup

### 1. Clone Repository

```bash id="8j3mb4"
git clone <your-repository-link>
```

### 2. Open Project

* Open using Arduino IDE or PlatformIO

### 3. Install ESP32 Board Support

* Install ESP32 board package in Arduino IDE

### 4. Upload Code

* Select ESP32 board
* Upload the sketch

### 5. Open Serial Monitor

* Baud Rate: `115200`

---

## Example Serial Output

```text id="v8jxtp"
Smart Exam Hall Monitoring System Started...
Simulation Mode: Random Sensor Values

Connecting to WiFi...
WiFi Connected Successfully!
ESP32 IP Address: 192.168.1.5

Sound: 732 | Motion: 1  -> ALERT!
Sound: 250 | Motion: 0  -> Normal
```

---

## Alert Conditions

The system triggers an alert when:

* Motion is detected
  OR
* Sound level exceeds threshold value

```cpp id="5qzw5k"
if (motion == 1 || scaledSound > soundThreshold)
```

---

## Future Improvements

* Real PIR sensor integration
* Real microphone/sound sensor support
* Cloud dashboard integration
* Attendance monitoring
* Firebase connectivity
* Telegram/Email alerts
* AI-based cheating detection
* Camera module integration

---

## Project Purpose

This project demonstrates:

* IoT system design
* ESP32 programming
* WiFi communication
* Real-time monitoring systems
* Embedded systems simulation
* Basic smart surveillance concepts

---
