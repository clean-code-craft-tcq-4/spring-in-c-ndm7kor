#include <stdio.h>
#include "Alerter.h"
#include "stats.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void check_and_alert (float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
    if(	computedStats.max > maxThreshold )
	{
	    emailAlertCallCount ++;
	    ledAlertCallCount ++;
	    
	    if(emailAlertCallCount == 1)
	    {
		    alerters[0]();
	    }
	    else
	    {
		    /* do nothing */
	    }
	    
	    if(emailAlertCallCount == 1)
	    {
		    alerters[1]();
	    }
	    else
	    {
		    /* do nothing */
	    }
	}
    else
    {
        /* nothing */
    }
}

void emailAlerter()
{
    //emailAlertCallCount ++;
    printf("Email sent");
}

void ledAlerter()
{
    //ledAlertCallCount ++;
    printf("LED Alert");
}



