#include "math.h"
#include "stdio.h"
#include "stats.h"


struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = NAN;
    s.min = NAN;
    s.max = NAN;

      float sum = 0;
      if((numberset != nullptr) && (setlength > 0))
        {
            s.min = numberset[0];
            s.max = numberset[0];
            for (int i = 0; i < setlength ; i++)
            {
                /* add the inputs in the number set arry */
                sum += numberset[i];
        
                /*find the minimum number */
                if (s.min > numberset[i])
                {
                    s.min = numberset[i];
                }
        
                /* find the maximum number */
                if (s.max < numberset[i])
                {
                    s.max = numberset[i];
                }       
            }
            s.average = sum / setlength;
      }
 return s;
}   
