#include <Arduino.h>

// ledPin refers to ESP32-CAM GPIO 4 (flashlight)
#define FLASH_GPIO_NUM 4

void setup()
{
  // initialize digital pin ledPin as an output
  pinMode(FLASH_GPIO_NUM, OUTPUT);

  digitalWrite(FLASH_GPIO_NUM, HIGH);

}

void loop()
{
}
