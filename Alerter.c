#include <stdio.h>
#include "Alerter.h"

int emailAlertCallCount;
int ledAlertCallCount;

void emailAlerter()
{
    emailAlertCallCount ++;
    printf("Email sent");
}

void ledAlerter()
{
    ledAlertCallCount ++;
    printf("LED Alert");
}
