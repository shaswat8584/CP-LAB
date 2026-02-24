//wap to reverse a string and check whether it is palindrome or not 

#include<stdio.h>
#include<string.h>
void main()
{
    char str[100], rev[100];
    int length, i, j;
    
    printf("Enter a string: ");
    gets(str);
    
    length = strlen(str);
    
    // Reverse the string
    for(i = length - 1, j = 0; i >= 0; i--, j++)
    {
        rev[j] = str[i];
    }
    rev[j] = '\0'; 
    printf("Reversed string: %s\n", rev);
    
    // Check if the original string is a palindrome
    if(strcmp(str, rev) == 0)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");
}