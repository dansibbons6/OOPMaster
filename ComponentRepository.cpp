#include "ComponentRepository.h"

void ComponentRepository::addComponent(
    AircraftComponent* component)
{
    components.push_back(component);
}

//AircraftComponent*
//ComponentRepository::findComponentByName(
//    string name)
//{
//    for (auto component : components)
//    {
//        if (component->getName() == name)
//        {
//            return component;
//        }
//    }
//
//    return nullptr;
//}

bool ComponentRepository::removeComponent(
    string name)
{
    for (auto it = components.begin();
         it != components.end();
         ++it)
    {
        if ((*it)->getName() == name)
        {
            components.erase(it);
            return true;
        }
    }

    return false;
}

vector<AircraftComponent*>
ComponentRepository::getAllComponents()
{
    return components;
}

int ComponentRepository::getComponentCount()
{
    return components.size();
}
