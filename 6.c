//Write a program to add two time in hour, minute and second using structure. The values of the time is to be taken from the user.
#include<stdio.h>
struct time{
    int hour;
    int min;
    int sec;
}t1,t2;
int main(){
    printf("Enter hour 1 and 2:\n");
    scanf("%d %d",&t1.hour, &t2.hour);
    printf("Enter min 1 and 2:\n");
    scanf("%d %d",&t1.min, &t2.min);
    printf("Enter sec 1 and 2:\n");
    scanf("%d %d",&t1.sec, &t2.sec);
    printf("Hour:%d Min: %d Sec: %d",t1.hour+t2.hour,t1.min+t2.min, t1.sec+t2.sec);
    return 0;
}