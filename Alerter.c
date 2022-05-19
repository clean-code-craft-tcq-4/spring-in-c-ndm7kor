#include <stdio.h>
#include "Alerter.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void check_and_alert (float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
    if(	computedStats.max > maxThreshold )
	{
			alerters[0]();
			alerters[1]();
	}
    else
    {
        /* nothing */
    }
}

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



