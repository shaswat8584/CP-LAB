//wap to enter a name and display all the vowels in the name
#include<stdio.h>
#include<string.h>
void main()
{
    char name[20];
    printf("Enter a name: ");
    scanf("%s",name);
    printf("The vowels in the name are: ");
    for(int i=0;i<strlen(name);i++)
    {
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' || name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U')
        {
            printf("%c ",name[i]);
        }
    }
}