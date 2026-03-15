#include<stdio.h>
void show(int x)
{
    x=10;
}
int main()
{
    int y =7,*ptr;
    ptr=&y;
    *ptr=10;
    show(y);
printf("%d \n",y);
printf("%d",*ptr);
}
