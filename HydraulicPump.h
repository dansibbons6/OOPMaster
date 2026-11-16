#ifndef HYDRAULICPUMP_H
#define HYDRAULICPUMP_H

#include "AircraftComponent.h"

class HydraulicPump : public AircraftComponent
{
private:
    double pressure;

public:
    HydraulicPump();
    HydraulicPump(string name,
                  double hours,
                  double pressure);

    void setPressure(double pressure);
    double getPressure();

    string getComponentStatus() override;
};

#endif
