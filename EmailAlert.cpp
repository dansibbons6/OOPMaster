#include "EmailAlert.h"
#include <iostream>

using namespace std;

void EmailAlert::sendAlert(string message)
{
    cout << "[EMAIL ALERT] "
         << message << endl;
}
