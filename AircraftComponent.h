#ifndef AIRCRAFTCOMPONENT_H
#define AIRCRAFTCOMPONENT_H

#include <string>

using namespace std;

class AircraftComponent
{
private:
    string name;
    double operatingHours;

public:
    AircraftComponent();
    AircraftComponent(string componentName,
                      double hours);

    void setName(string componentName);
    string getName();

    void setOperatingHours(double hours);
    double getOperatingHours();

    virtual string getComponentStatus() = 0;

    string updateComponentStatus();

    virtual ~AircraftComponent();
};

#endif
