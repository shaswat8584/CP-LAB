#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch = 'A';
    FILE *fp=fopen("file.txt", "w");
    if(fp==NULL)
    {
        printf("Error opening file!");
        exit(0);
    }
    fprintf(fp, "%c", ch);
    fclose(fp);
    return 0;

}