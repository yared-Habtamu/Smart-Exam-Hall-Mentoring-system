# Smart Exam Hall Monitoring System

A simple IoT-based simulation project using an ESP32 to monitor suspicious activity in an exam hall. The system detects motion and high sound levels, then triggers an LED and buzzer alert.

## Features

* Motion detection using a PIR sensor
* Sound level monitoring using a sound sensor
* LED and buzzer alert system
* Serial Monitor output for real-time status updates

## Components Used

* ESP32
* PIR Motion Sensor
* Sound Sensor
* LED
* Buzzer
* Jumper Wires

## Pin Configuration

| Component    | ESP32 Pin |
| ------------ | --------- |
| PIR Sensor   | GPIO 13   |
| Sound Sensor | GPIO 34   |
| LED          | GPIO 2    |
| Buzzer       | GPIO 15   |

## How It Works

1. The PIR sensor checks for movement.
2. The sound sensor reads surrounding noise levels.
3. If motion is detected or sound exceeds the threshold:

   * LED turns ON
   * Buzzer activates
   * Alert message is displayed in Serial Monitor
4. Otherwise, the system remains in normal state.

## Output Example

```bash
Sound: 320  Motion: 0  -> Normal
Sound: 780  Motion: 1  -> ALERT!
```

## Technologies Used

* Arduino IDE
* ESP32 Microcontroller
* Embedded C/C++

## Future Improvements

* Send alerts to mobile/web dashboard
* Store logs in database
* Add camera monitoring
* Integrate Wi-Fi notifications

