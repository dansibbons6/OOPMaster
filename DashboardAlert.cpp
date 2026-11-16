#include "DashboardAlert.h"
#include <iostream>

using namespace std;

void DashboardAlert::sendAlert(string message)
{
    cout << "[DASHBOARD ALERT] "
         << message << endl;
}