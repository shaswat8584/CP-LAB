//wap to add two number by call by value
#include<stdio.h>
void add(int a,int b)
{
    int sum;
    sum=a+b;
    printf("sum is %d",sum);
}
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    add(x,y);
}