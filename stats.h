#ifndef __STATS_H
#define __STATS_H

struct Stats compute_statistics(const float* numberset, int setlength);

struct Stats {
  float average; 
  float max;
  float min;
};

#define NUMBER_OF_ALERTS 2

extern int emailAlertCallCount;
extern int ledAlertCallCount;

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
void emailalerter(void);
void ledalerter(void);


#endif
