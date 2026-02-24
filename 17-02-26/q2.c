//wap to change the case with accepted string from keyboard 
#include<stdio.h>
#include<string.h>
void main(){
char str[20];
printf("Enter a string: ");
gets(str);
for(int i=0;i<strlen(str);i++){
    if(str[i]>=65 && str[i]<=90){
        str[i]=str[i]+32;
    }
    else if(str[i]>=97 && str[i]<=122){
        str[i]=str[i]-32;
    }
    printf("%c",str[i]);
}
}