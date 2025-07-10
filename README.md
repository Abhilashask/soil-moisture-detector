Soil Moisture Detector

This Arduino project reads and reports the moisture level of soil using a moisture sensor. It helps you monitor soil conditions for better plant care.

Features

- Reads analog moisture sensor values.
- Displays moisture level on the Serial Monitor.
- Simple setup for quick monitoring.

Hardware Setup

- Connect the sensor’s power and ground to Arduino 5V and GND.
- Connect the sensor output to an analog input pin (e.g., A0).

How It Works

The sensor outputs an analog value corresponding to soil moisture. Dry soil gives higher values; wet soil gives lower values. The Arduino reads this value and prints it for monitoring.

Usage

1. Upload SOIL_MOISTURE.ino to your Arduino board.
2. Open the Serial Monitor at 9600 baud.
3. Observe moisture levels and act accordingly.
