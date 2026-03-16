//Wap to add two times using structure. And display time should be valid.
#include<stdio.h>
#include<math.h>

struct Time
{
    int hr;
    int min;
    int sec;
}t1,t2,sum;

int main()
{
    printf("Enter time 1 (hr min sec): ");
    scanf("%d %d %d", &t1.hr, &t1.min, &t1.sec);
    printf("Enter time 2 (hr min sec): ");
    scanf("%d %d %d", &t2.hr, &t2.min, &t2.sec);
    
    sum.sec = t1.sec + t2.sec;
    sum.min = t1.min + t2.min + sum.sec / 60;
    sum.hr = t1.hr + t2.hr + sum.min / 60;
    
    sum.sec = sum.sec % 60;
    sum.min = sum.min % 60;
    sum.hr = sum.hr % 24; // Assuming we want to wrap around after 24 hours
    
    printf("Sum of times: %02d:%02d:%02d\n", sum.hr, sum.min, sum.sec);
    
    return 0;
}