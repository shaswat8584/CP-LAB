//wap to acceprt the first name and last name and concatenate in third variable and then dispaly it
#include<stdio.h>
#include<string.h>
void main(){
    char firstName[20], lastName[20], fullName[40];
    printf("Enter first name: ");
    scanf("%s",firstName);
    printf("Enter last name: ");
    scanf("%s",lastName);
    strcpy(fullName,firstName);
    strcat(fullName," ");
    strcat(fullName,lastName);
    printf("Full name is: %s",fullName);
}