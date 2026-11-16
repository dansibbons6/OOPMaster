#ifndef EMAILALERT_H
#define EMAILALERT_H

#include "AlertService.h"

class EmailAlert : public AlertService
{
public:
    void sendAlert(string message) override;
};

#endif
