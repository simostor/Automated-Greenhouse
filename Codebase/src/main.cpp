#include <Arduino.h>
#include "Functions.h"
#include "ezButton.h"

const int PWM_PIN = 11;
const int MW = 7; // More water button pin
const int LW = 8; // Less water button pin
ezButton MORE_WATER(MW); // Creating button instance
ezButton LESS_WATER(LW); // Creating button instance


void setup() {
Serial.begin(9600);
pinMode(PWM_PIN, OUTPUT);
MORE_WATER.setDebounceTime(50); // 50 ms debounce time
LESS_WATER.setDebounceTime(50); // 50 ms debounce time
}

void loop() {
MORE_WATER.loop();
LESS_WATER.loop();

int relayVoltage = 255; // Provide 5V to turn on the pump relay
analogWrite(PWM_PIN, relayVoltage);


if (MORE_WATER.isPressed())
{
    Serial.println("You added one liter of water");
}
}
