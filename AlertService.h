#ifndef ALERTSERVICE_H
#define ALERTSERVICE_H

#include <string>

using namespace std;

class AlertService
{
public:
    virtual void sendAlert(string message) = 0;
    virtual ~AlertService() {}
};

#endif
