//wap to input 1st name middlename and last name and print as A.K.Das using pointer
#include<stdio.h>
void main()
{
    char firstName[50], middleName[50], lastName[50];
    char *ptr1, *ptr2, *ptr3;
    
    printf("Enter first name: ");
    gets(firstName);
    printf("Enter middle name: ");
    gets(middleName);
    printf("Enter last name: ");
    gets(lastName);
    
    ptr1 = firstName;
    ptr2 = middleName;
    ptr3 = lastName;
    
    printf("%c.%c.%s\n", *ptr1, *ptr2, ptr3);
}