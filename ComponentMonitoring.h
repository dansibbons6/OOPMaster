#ifndef COMPONENTMONITORING_H
#define COMPONENTMONITORING_H

#include "ComponentRepository.h"
#include "AlertService.h"

class ComponentMonitoring
{
private:
    AlertService* alertService;

public:
    ComponentMonitoring(AlertService* service);

    void generateStatusReport(
        ComponentRepository& repository);

private:
    void checkForAlerts(
        AircraftComponent* component);
};

#endif
