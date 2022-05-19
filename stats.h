#ifndef __STATS_H
#define __STATS_H

struct Stats compute_statistics(const float* numberset, int setlength);

struct Stats {
  float average; 
  float max;
  float min;
};

extern int emailAlertCallCount;
extern int ledAlertCallCount;

#endif
