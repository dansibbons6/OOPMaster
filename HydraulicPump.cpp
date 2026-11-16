#include "HydraulicPump.h"
#include <stdexcept>

HydraulicPump::HydraulicPump()
    : AircraftComponent(),
      pressure(3000)
{
}

HydraulicPump::HydraulicPump(
    string name,
    double hours,
    double pressure)
    : AircraftComponent(name, hours)
{
    setPressure(pressure);
}

void HydraulicPump::setPressure(double pressure)
{
    if (pressure < 0 || pressure > 5000)
    {
        throw invalid_argument(
            "Hydraulic pressure must be between 0 and 5000 psi."
        );
    }

    this->pressure = pressure;
}

double HydraulicPump::getPressure()
{
    return pressure;
}

string HydraulicPump::getComponentStatus()
{
    if (pressure >= 2800 &&
        pressure <= 3200)
    {
        return "Hydraulic Pump: Operational";
    }

    if (pressure >= 2000)
    {
        return "Hydraulic Pump: Low Pressure Warning";
    }

    return "Hydraulic Pump: Critical Pressure Failure";
}
