# LX-16A Servo Library

Simple library to operate LX-16A serial servos.
The code provided by the servo manufacturer is quite difficult to understand.
Third party libraries do not work with BusLinker this library was created to fix this
This library sends simple commands to LX-16A serial bus servo.
Using the BusLinker IS RECOMMENDED, it is compatible with this library.

## Generic instructions

```
RX BusLinker -> TX 
TX BusLinker -> RX
GND BusLinker -> GND
5V BusLinker -> 3.3V 

```

