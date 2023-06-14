#include <Arduino.h>
#include "Functions.h"

const int PWM_PIN = 11;


void setup() {
Serial.begin(9600);
pinMode(PWM_PIN, OUTPUT);
}

void loop() {
int pwm = 255;
analogWrite(PWM_PIN, pwm);
}