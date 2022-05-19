#ifndef __ALERT_H
#define __ALERT_H

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

void emailAlerter();
void ledAlerter();

#endif
