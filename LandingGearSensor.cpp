#include "LandingGearSensor.h"
#include <stdexcept>

LandingGearSensor::LandingGearSensor()
    : AircraftComponent(),
      state("UNKNOWN")
{
}

LandingGearSensor::LandingGearSensor(
    string name,
    double hours,
    string state)
    : AircraftComponent(name, hours)
{
    setState(state);
}

void LandingGearSensor::setState(string state)
{
    if (state == "DEPLOYED" ||
        state == "RETRACTED" ||
        state == "UNKNOWN")
    {
        this->state = state;
    }
    else
    {
        throw invalid_argument(
            "Invalid landing gear state."
        );
    }
}

string LandingGearSensor::getState()
{
    return state;
}

string LandingGearSensor::getComponentStatus()
{
    if (state == "DEPLOYED")
        return "Landing Gear: Deployed";

    if (state == "RETRACTED")
        return "Landing Gear: Retracted";

    return "Landing Gear: Unknown State";
}
