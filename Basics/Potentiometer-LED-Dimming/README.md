# Button-Controlled LED Dimming

## Overview
Used a push button to toggle an LED on and off while controlling its brightness with a potentiometer.

## Components
- Arduino Uno
- LED
- Push button
- Potentiometer
- 330Ω resistor
- Breadboard and jumper wires

## What I Learned
- Reading button input with `digitalRead()`
- Reading potentiometer values with `analogRead()`
- Controlling LED brightness with `analogWrite()`
- Using button states to toggle an LED

## Challenge
Getting the button to register a single press instead of repeatedly toggling while held. Fixed this using previous button state tracking.
