#ifndef FUNCTIONS_H
#define FUNCTIONS_H

class Functions{
    public:
    Functions(); // Constructor
    void someFunction();

    private:
};


// Class is used to monitor the time, and deciding when to turn on the water pump
class WaterControl{
    public:
    WaterControl(double, int, const int); // Constructor

    // Run the pump at max speed for one minute. Measure the amount of water to calculate the flowrate
    void oneMinuteRun(){}



    private:
    // TIME CONTROL
    unsigned long currentTime; 
    unsigned long interval;
    unsigned long elapsedTime;
    double secondsPerDay = 60 * 60 * 24;

    // Pump related
    const int pumpPin;
    double wantedLiters; // [liter] Amount of water wanted in one day
    double litersToday; // [liter] Accumulated amount of water today
    double flowRate; // [liter/second]
    int wateringsPerDay; // n times of watering each day
};


#endif

