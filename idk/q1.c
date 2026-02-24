// wap to check evenor odd using function with arguments and return type
#include<stdio.h>
int evenorodd(int num)
{
    if(num%2==0)
        return 1;
    else
        return 0;
}
void main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(evenorodd(number))
        printf("%d is even.",number);
    else
        printf("%d is odd.",number);
}