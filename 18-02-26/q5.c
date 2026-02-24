//wap to accept 10 characters from keyboard and display which are vowels using pointer.
#include<stdio.h>
void main()
{
    char arr[10],*ptr;
    int i;
    printf("Enter 10 characters: ");
    for(i=0;i<10;i++)
        scanf("%c",&arr[i]);
    ptr=arr;
    printf("Vowels are: ");
    for(i=0;i<10;i++)
    {
        if(*ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u' || *ptr=='A' || *ptr=='E' || *ptr=='I' || *ptr=='O' || *ptr=='U')
            printf("%c ",*ptr);
        ptr++;
    }
}