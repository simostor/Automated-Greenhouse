#include "Arduino.h"
#include "functions.h"

WaterControl::WaterControl(double wantedLiters, int wateringsPerDay, const int pumpPin) :
    wantedLiters(wantedLiters),
    wateringsPerDay(wateringsPerDay),
    pumpPin(pumpPin),
    litersToday(0.0),
    flowRate(0.0),
    currentTime(0),
    interval(1000),
    elapsedTime(0)
{
    // Constructor implementation
}

void WaterControl::oneMinuteRun()
{
    // Run the pump at max speed for one minute. Measure the amount of water to calculate the flowrate
    // TODO: Implement the pump control and flow rate measurement logic here
}