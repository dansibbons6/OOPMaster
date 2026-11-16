#include <assert.h>
#include <iostream>
#include "HydraulicPump.h"
#include "TemperatureSensor.h"
#include "LandingGearSensor.h"
#include "ComponentRepository.h"
#include "ComponentMonitoring.h"
#include "DashboardAlert.h"
#include "EmailAlert.h"

using namespace std;

int main() {
    ComponentRepository componentRepository;




    HydraulicPump pump1("HP001", 1200, 100);
    TemperatureSensor temp1("TS001", 800, 110);
    LandingGearSensor gear1("LG001", 1500, "UNKNOWN");

    componentRepository.addComponent(&pump1);
    componentRepository.addComponent(&temp1);
    componentRepository.addComponent(&gear1);

    //assert(componentRepository.getComponentCount() == 3 && "Component count incorrect");
    //std::cout<<componentRepository.getComponentCount() << std::endl;

    //std::cout << componentRepository.findComponentByName("HP001")->getName() << std::endl;
    //if (componentRepository.findComponentByName("HP001")->getName() == "HP001") {
    //    printf("true\n");
    //}
    //else
    //    printf("false\n");

    //EmailAlert emailAlert;
    DashboardAlert dashboardAlert;
    ComponentMonitoring componentMonitoring(&dashboardAlert);

    componentMonitoring.generateStatusReport(componentRepository);

    //componentRepository.removeComponent("HP001");
    //componentMonitoring.generateStatusReport(componentRepository);

    //cout << pump1.updateComponentStatus() << endl;
    //cout << temp1.updateComponentStatus() << endl;
    //cout << gear1.updateComponentStatus() << endl;
    //
    //HydraulicPump pump2;
    //cout << temp1.getTemp() << endl;
    //cout << gear1.getName() << endl;
    //gear1.setName("Gear2");
    //cout << gear1.getName() << endl;
    //
    //cout << pump1.getOperatingHours() << endl;
    ////pump1.setOperatingHours(-1);
    //pump1.setPressure(1900);
    ////cout << pump1.getPressure() << endl;
    ////pump1.setPressure(5001);
    //cout << pump1.getComponentStatus() << endl;
    //cout << temp1.getTemp() << endl;
    //temp1.setTemp(100);
    //cout << temp1.getTemp() << endl;
    //cout << temp1.getComponentStatus() << endl;
    //
    //gear1.setState("UNKNOWN");
    //cout << gear1.getComponentStatus() << endl;
    ////cout << gear1.getState() << endl;
    return 0;
}