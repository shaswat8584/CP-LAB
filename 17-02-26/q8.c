//wap to enter two string and compare it and check whether it is equal smaller or greater than the other string
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    int result = strcmp(str1, str2);
    if(result == 0)
        printf("The strings are equal.");
    else if(result < 0)
        printf("The first string is smaller than the second string.");
    else
        printf("The first string is greater than the second string.");
}