# Multi-Sensor-Environmental-Monitoring-System-using-LPC2129

##  Project Overview
An embedded systems project using the LPC2129 ARM7 microcontroller to monitor environmental parameters through multiple sensors. The system collects sensor readings, processes the data, and displays the environmental status through an LCD and UART terminal.

##  Features
- Temperature monitoring.
- Light intensity monitoring using LDR.
- Soil moisture monitoring.
- Water detection.
- Status indication using LEDs.
- LCD and UART-based data display.

##  Technologies Used
- Microcontroller: LPC2129 (ARM7)
- Programming Language: Embedded C
- IDE: Keil µVision
- Sensors: Temperature, LDR, Soil Moisture, Water Sensor
- Peripherals: ADC, GPIO, UART, LCD

##  Working Principle
1. Sensors collect environmental data.
2. LPC2129 reads sensor values through ADC and GPIO.
3. Sensor readings are compared with predefined threshold values.
4. Environmental status is displayed on the LCD and UART terminal.
5. LEDs indicate the detected environmental condition.

##  Applications
- Environmental monitoring.
- Smart agriculture.
- Greenhouse monitoring.
- Automated irrigation systems.
