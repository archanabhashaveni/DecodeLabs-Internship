# IoT Security Node Architecture

## System Flow

Ultrasonic Sensor
↓
ESP8266 / ESP32 Microcontroller
↓
Wi-Fi Network
↓
MQTT / HTTP POST Protocol
↓
Cloud Dashboard (Adafruit IO / Blynk)
↓
Live Monitoring and Alerts

## Components

### Sensor

Ultrasonic Distance Sensor used to detect intruders.

### Microcontroller

ESP8266 or ESP32 responsible for reading sensor data and sending telemetry.

### Communication Protocol

MQTT or HTTP POST used to transmit data to the cloud.

### Cloud Dashboard

Displays live sensor readings, trends, and alerts.

## Workflow

1. Sensor captures distance readings.
2. Microcontroller processes the readings.
3. Data is transmitted via Wi-Fi.
4. Cloud platform receives telemetry.
5. Dashboard visualizes the information.
6. Alerts are generated when abnormal readings occur.
