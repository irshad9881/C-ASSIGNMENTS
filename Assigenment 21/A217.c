#include <stdio.h>

struct time
{
    int sec;
    int min;
    int hr;
};
void diff_between_time(struct time t1 ,struct time t2 ,struct time *diff);
int main()
{
    struct time start_time,stop_time,diff;
    printf("Enter start time :\n");
    printf("Enter hour ,min and sec:\n");
    scanf("%d %d %d ",&start_time.hr,&start_time.min,&start_time.sec);
    
     printf("Enter stop time :");
     scanf("%d %d %d ",&stop_time.hr,&stop_time.hr,&stop_time.sec);
     printf("##############################\n");
     diff_between_time(start_time,stop_time,&diff);
     printf(" diff time %d:%d:%d -",start_time.hr,start_time.min,start_time.sec);
    printf("%d:%d:%d",stop_time.hr,stop_time.min,stop_time.sec);
    printf("=%d:%d:%d",diff.hr,diff.min,diff.sec);
    return 0;
}
void diff_between_time(struct time start,struct time stop,struct time *diff)
{
    while(stop.sec>start.sec)
    {
      --start.min;
       start.sec+=60; 
    }
    diff->sec=start.sec-stop.sec;
    while(stop.min>start.min)
    {
        --start.hr;
        start.min+=60;
    }
    diff->min=start.min-stop.min;
    diff->hr=start.hr-stop.hr; 
}
