# Distance Measuring System

## Introduction

This mini-project presents a distance measuring system developed around the ATmega32 microcontroller, which operates at a frequency of 8MHz. The primary objective is to measure distances accurately using the HC-SR04 Ultrasonic sensor and display the results on a 4x16 LCD. Below, you will find the key specifications and functionalities of this system:

## Specifications

### Microcontroller
- Utilizes the ATmega32 Microcontroller with an operating frequency of 8MHz.

### Distance Measurement
- Accurately measures distances using the HC-SR04 Ultrasonic sensor. Refer to the "HC-SR04 Ultrasonic MT Student Tutorial" PDF file for detailed information on interfacing with this sensor.

### LCD Display
- Displays the measured distance value on a 4x16 LCD.

### Layered Architecture
- The project adopts a layered architecture model, incorporating drivers for GPIO (General Purpose Input/Output), ICU (Input Capture Unit), Ultrasonic Sensor, and LCD.

## Drivers and Components
- GPIO Driver
- ICU Driver (for Input Capture Unit)
- Ultrasonic Sensor Driver (Custom)
- 4x16 LCD Driver (8-bit data mode)

## Microcontroller
- ATmega32 (operating at 8MHz frequency)

## Ultrasonic Driver Requirements
1. **Initialization:** Initialize the ICU driver as necessary, configure the ICU callback function, and set up the trigger pin as an output.

2. **Trigger Function:** Send the trigger pulse to the ultrasonic sensor.

3. **Distance Measurement Function:** Measure the distance by triggering the sensor and initiating measurements using the ICU. Return the measured distance in centimeters.

4. **Callback Function:** Implement the callback function invoked by the ICU driver to calculate the pulse time generated by the ultrasonic sensor.

## Schmatics
![image](https://github.com/Esraa-f28/Distance-Measuring-System/assets/103899204/8fbcf584-6b70-41b3-bb10-7b30dddc8e98)
