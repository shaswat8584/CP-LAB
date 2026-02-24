//wap to add 2 no by call by address
#include<stdio.h>
void add(int *a,int *b)
{
    int sum;
    sum=*a+*b;
    printf("sum is %d \n",sum);
    *a=10;

}
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    add(&x,&y);
    printf("%d",x);
}