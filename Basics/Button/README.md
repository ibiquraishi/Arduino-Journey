# Button-Controlled LED

## Overview
- Date Completed: 11/17/26
- Built a circuit where a button turns a project on and off with each press (a simple LED being the project for this circuit)

## Components
- Arduino Uno
- LED
- Push button
- 330Ω resistor
- 10kΩ pulldown resistor
- Breadboard and jumper wires

## How It Works
The Arduino detects button presses and switches the project between ON and OFF states. In the "ON" state, the LED lights up, and in the "OFF" state, the LED turns off.

## Skills
- Digital inputs and outputs
- `digitalRead()` and `digitalWrite()`
- HIGH and LOW states
- Pulldown resistors
- Conditional statements

## Challenges
The LED behaved unpredictably because the button input was floating when the button wasn't pressed.
I fixed this by adding a 10kΩ pulldown resistor, which keeps the input LOW when the button is released and makes the circuit work reliably.

