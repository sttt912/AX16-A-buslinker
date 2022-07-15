# LX-16A Servo Library

A simple library for working with LX-16A servos. The code provided by the servo manufacturer is quite hard to understand and missing a lot of things (motor mode, temperature reading, etc).

Manufacturer's original example and documentation:

https://github.com/sttt912/LX16-A-buslinker/tree/main/SerialServoRP
https://github.com/sttt912/LX16-A-buslinker/blob/main/lx-16a%20LewanSoul%20Bus%20Servo%20Communication%20Protocol.pdf

Moreover third party libraries do not work with BusLinker this library was created to fix this This library sends simple commands to LX-16A serial bus servo. Using the BusLinker IS RECOMMENDED, it is compatible with this library.
## Generic instructions

```
RX BusLinker -> TX 
TX BusLinker -> RX
GND BusLinker -> GND
5V BusLinker -> 3.3V 
```