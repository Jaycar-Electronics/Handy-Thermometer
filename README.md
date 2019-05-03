# Handy-Thermometer

Keep this handy tool close by when you’re building your next project. Using a simple, non-contact thermometer module, this little button activated device makes it easy to check any heat source and compare with ambient room temperature. Use it to find where a potential short is on your circuit boards or how hot your coffee is before burning your tongue. Push button operated.

## Bill of Materials

|Qty| Code | Description |
|---|---|---|
|1 | [XC4414](http://jaycar.com.au/p/XC4414) | Arduino Nano
|1 | [XC3704](http://jaycar.com.au/p/XC3704) | Temperature sensor
|1 | [PH9235](http://jaycar.com.au/p/PH9235) | 9V PCB Battery holder
|1 | [SB2423](http://jaycar.com.au/p/SB2423) | 9V Battery
|1 | [SP0601](http://jaycar.com.au/p/SP0601) | Tactile pushbutton switch
|1 | [WH3032](http://jaycar.com.au/p/WH3032) | Solid core leads
|1 | [XC4384](http://jaycar.com.au/p/XC4384) | Monochrome OLED screen

## Connection table

As both of these devices are I2C, they are connected to the same signal lines

| NANO | OLED screen | Temp module |
| --- | ---- | --- |
| 3v3 | VCC | VIN |
| G | GND | GND |
| A4 | SDA | SDA |
| A5 | SCL | SCL |

This is a very simple circuit, the only final piece is the switch, that bridges the connection between the 9V battery and the VIN pin. If you wanted to use a switch instead, you can then keep the device turned on, and have the pushbutton cause a data-hold instead, by feeding the button into one of the digital input pins.

## Software Libraries

Thankfully both of these libraries can be found in the Arduino library manager.

| Software | Author | Version |
| --- | --- | --- |
| Adafruit_SSD1306 | Adafruit | 1.2.9 |
| Adafruit_MLX90614 | Adafruit | 1.0.0 | 


## Assembly

## Programming


## Future improvements
