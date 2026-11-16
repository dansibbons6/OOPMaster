#include "TemperatureSensor.h"
#include <stdexcept>

TemperatureSensor::TemperatureSensor()
    : AircraftComponent(),
      temp(25.0)
{
}

TemperatureSensor::TemperatureSensor(
    string name,
    double hours,
    double temp)
    : AircraftComponent(name, hours)
{
    setTemp(temp);
}

void TemperatureSensor::setTemp(double temp)
{
    if (temp < -60 || temp > 200)
    {
        throw invalid_argument(
            "Temperature must be between -60 and 200 Celsius."
        );
    }

    this->temp = temp;
}

double TemperatureSensor::getTemp()
{
    return temp;
}

string TemperatureSensor::getComponentStatus()
{
    if (temp < 100)
    {
        return "Temperature Sensor: Normal";
    }

    return "Temperature Sensor: Overheating";
}
