#ifndef DASHBOARDALERT_H
#define DASHBOARDALERT_H

#include "AlertService.h"

class DashboardAlert : public AlertService
{
public:
    void sendAlert(string message) override;
};

#endif