//wap to declare the 2 string variable , 2nd string accepts the name and asign to the first string and the first string is displayed
#include<stdio.h>
#include<string.h>
void main(){
    char str1[20], str2[20];
    printf("Enter a name: ");
    scanf("%s",str2);
    strcpy(str1,str2);
    printf("The name is: %s",str1);
}