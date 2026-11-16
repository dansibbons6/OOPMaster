#include "AircraftComponent.h"
#include <stdexcept>

AircraftComponent::AircraftComponent()
    : name("Unknown"),
      operatingHours(0.0)
{
}

AircraftComponent::AircraftComponent(
    string componentName,
    double hours)
{
    setName(componentName);
    setOperatingHours(hours);
}

void AircraftComponent::setName(string componentName)
{
    if (componentName.empty())
    {
        throw invalid_argument(
            "Component name cannot be empty."
        );
    }

    name = componentName;
}

string AircraftComponent::getName()
{
    return name;
}

void AircraftComponent::setOperatingHours(double hours)
{
    if (hours < 0)
    {
        throw invalid_argument(
            "Operating hours cannot be negative."
        );
    }

    operatingHours = hours;
}

double AircraftComponent::getOperatingHours()
{
    return operatingHours;
}

string AircraftComponent::updateComponentStatus()
{
    return getComponentStatus();
}

AircraftComponent::~AircraftComponent()
{
}
