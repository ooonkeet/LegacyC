#include<stdio.h>
typedef struct time_period{
    int hours;
    int mins;
    int secs;
}time;

void difference(time start,time stop,time *diff){
    if(stop.secs<start.secs){
        stop.mins--;
        stop.secs+=60;
    }
    diff->secs=stop.secs-start.secs;
    if(stop.mins<start.mins){
        stop.hours--;
        stop.mins+=60;
    }
    diff->mins=stop.mins-start.mins;
    if(stop.hours<start.hours){
        stop.hours+=24;
    }
    diff->hours=stop.hours-start.hours;
}
int main(){
    time startTime,stopTime,diff;
    printf("Enter the start time in order(hh:mm:ss) [24 hour format] = ");
    scanf("%d %d %d",&startTime.hours,&startTime.mins,&startTime.secs);
    while((startTime.hours<0 || startTime.hours>=24) || (startTime.mins<0 || startTime.mins>=60) || (startTime.secs<0 || startTime.secs>=60) ){
        printf("\nCorrectly enter the start time in order(hh:mm:ss) [24 hour format] = ");
        scanf("%d %d %d",&startTime.hours,&startTime.mins,&startTime.secs);
    }
    printf("\nEnter the stop time in order(hh:mm:ss) [24 hour format] = ");
    scanf("%d %d %d",&stopTime.hours,&stopTime.mins,&stopTime.secs);
    while((stopTime.hours<0 || stopTime.hours>=24) || (stopTime.mins<0 || stopTime.mins>=60) || (stopTime.secs<0 || stopTime.secs>=60)){
        printf("\nCorrectly enter the stop time in order(hh:mm:ss) [24 hour format] = ");
        scanf("%d %d %d",&stopTime.hours,&stopTime.mins,&stopTime.secs);
    }
    difference(startTime,stopTime,&diff);
    printf("\nTime Difference: %d hours, %d minutes, %d seconds.\n",diff.hours,diff.mins,diff.secs);
    return 0;
}
