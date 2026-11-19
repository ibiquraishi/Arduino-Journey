# Dimming LED brightness with a Potentiometer

## Overview

- Date completed: 11/18/26
- Built a circuit where a potentiometer controls LED brightness and a button toggles the LED between ON and OFF.

## Components

- Arduino Uno
- LED
- Push button
- Potentiometer
- 330Ω resistor
- 10kΩ pulldown resistor (if used)
- Breadboard and jumper wires

## How It Works

The potentiometer adjusts the LED brightness by changing its PWM output. The button toggles the LED on and off with each press.

## Skills

- Analog and digital inputs
- PWM output
- `analogRead()` and `analogWrite()`
- `digitalRead()`
- Button state tracking
- Conditional statements

## Challenges
At first, the potentiometer wasn't controlling the LED as expected, and the circuit only worked when I touched or moved the wires. After testing the wires individually, I identified a faulty wire and replaced it, which resolved the issue and allowed the circuit to work properly.
