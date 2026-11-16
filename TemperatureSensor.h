#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H

#include "AircraftComponent.h"

class TemperatureSensor : public AircraftComponent
{
private:
    double temp;

public:
    TemperatureSensor();
    TemperatureSensor(string name,
                      double hours,
                      double temp);

    void setTemp(double temp);
    double getTemp();

    string getComponentStatus() override;
};

#endif
