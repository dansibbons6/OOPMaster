#include "ComponentMonitoring.h"
#include <iostream>

using namespace std;

ComponentMonitoring::ComponentMonitoring(
    AlertService* service)
    : alertService(service)
{
}

void ComponentMonitoring::
generateStatusReport(
    ComponentRepository& repository)
{
    for (auto component :
         repository.getAllComponents())
    {
        cout << "Component: "
             << component->getName()
             << endl;

        cout << "Status: "
             << component->updateComponentStatus()
             << endl;

        checkForAlerts(component);

        cout << endl;
    }
}

void ComponentMonitoring::checkForAlerts(
    AircraftComponent* component)
{
    string status =
        component->updateComponentStatus();

    if (status.find("Warning") != string::npos ||
        status.find("Overheating") != string::npos ||
        status.find("Unknown") != string::npos ||
        status.find("Critical") != string::npos)
    {
        alertService->sendAlert(
            component->getName() +
            " requires maintenance.");
    }
}
