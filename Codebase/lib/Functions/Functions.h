#ifndef FUNCTIONS_H
//#pragma once
#define FUNCTIONS_H



// Class is used to monitor the time, and deciding when to turn on the water pump
class WaterControl{
    public:
    WaterControl(double litersPerDay, int numberOfWaterings, const int relayPin); // Constructor

    // Run the pump at max speed for one minute. Measure the amount of water to calculate the flowrate
    void oneMinuteRun();
    void setWateringsPerDay(int wateringsPerDay);
    int getWateringsPerDay();
    void setWantedLiters(double wantedLiters);
    int getWantedLiters();




    private:
    // TIME CONTROL
    unsigned long currentTime; 
    unsigned long interval;
    unsigned long elapsedTime;
    int secondsPerDay = 60 * 60 * 24;

    // Pump related
    const int pumpPin;
    double wantedLiters; // [liter] Amount of water wanted in one day
    double litersToday; // [liter] Accumulated amount of water today
    double flowRate; // [liter/second]
    int wateringsPerDay; // n times of watering each day
};


#endif

