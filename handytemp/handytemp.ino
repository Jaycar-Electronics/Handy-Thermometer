#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>  // Version 1.2.9
#include <Adafruit_MLX90614.h> // Version 1.0.0
#include <Wire.h>

Adafruit_SSD1306 display(128, 64, &Wire, 0);
Adafruit_MLX90614 temperature;

void setup()
{
  // put your setup code here, to run once:
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  temperature.begin();
  display.clearDisplay();

  display.setTextColor(WHITE);

  Serial.begin(9600);
  Serial.println("# Handy Thermo started");
}

void loop()
{
  // put your main code here, to run repeatedly:
  double ambient = temperature.readAmbientTempC();
  double object = temperature.readObjectTempC();

  display.clearDisplay();
  display.setTextSize(1);

  display.setCursor(0, 0);
  display.print("Ambient : ");
  display.print(ambient, 2);

  display.setCursor(45, 55);
  display.print("Celcius");

  display.setTextSize(5);
  display.setCursor(0, 14);
  display.print(object, 1);

  display.display();
  //uncomment this line to feed data back to your computer
  //Serial.print(ambient,2); Serial.print(","); Serial.print(object,2); Serial.println(",C");
}
