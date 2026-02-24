//write a program to print the address of each element of an array using pointer.
#include <stdio.h>
void main()
{
    
    int arr[5]={10,20,30,40,50};
    int *ptr;
    ptr=arr; 
    ptr=arr+0;
    ptr=&arr[0];
    for ( int i = 0; i < 5; i++, ptr++)
    {
        // printf("%d\n",*ptr);
        printf("%p\n",ptr);
    }
    
}