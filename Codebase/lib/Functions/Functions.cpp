#include "Arduino.h"
#include "Functions.h"

Functions::Functions()
{
    // Constructor code
}

void Functions::someFunction()
{
    // Define what someFunction() does
}

WaterControl::WaterControl(double litersPerDay, int numberOfWaterings, const int relayPin)
{
    wateringsPerDay = numberOfWaterings;
    pumpPin = relayPin;
    wantedLiters = litersPerDay;
}
