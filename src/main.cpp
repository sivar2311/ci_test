#include <Arduino.h>
#include "MyLib.h"

#define LED 8

void setup() {
    Serial.begin(115200);
    Serial.println("Hello World");
    pinMode(LED, OUTPUT);
}

void loop() {
    Serial.println("Hello World");
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
}