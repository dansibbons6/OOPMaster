#ifndef LANDINGGEARSENSOR_H
#define LANDINGGEARSENSOR_H

#include "AircraftComponent.h"

class LandingGearSensor : public AircraftComponent
{
private:
    string state;

public:
    LandingGearSensor();
    LandingGearSensor(string name,
                      double hours,
                      string state);

    void setState(string state);
    string getState();

    string getComponentStatus() override;
};

#endif
