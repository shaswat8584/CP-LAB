//wap to find the length of string using pointer.
#include<stdio.h>
void main()
{
    char str[100],*ptr;
    int length=0;
    printf("Enter a string: ");
    gets(str);
    ptr=str;
    while(*ptr!='\0')
    {
        length++;
        ptr++;
    }
    printf("Length of the string is: %d",length);
}