#ifndef COMPONENTREPOSITORY_H
#define COMPONENTREPOSITORY_H

#include <vector>
#include "AircraftComponent.h"

class ComponentRepository
{
private:
    vector<AircraftComponent*> components;

public:
    void addComponent(AircraftComponent* component);
    AircraftComponent* findComponentByName(string name);
    bool removeComponent(string name);

    vector<AircraftComponent*> getAllComponents();
    int getComponentCount();
};

#endif
