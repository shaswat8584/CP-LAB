// wap to enter to student detail in a file
#include <stdio.h>
#include <stdlib.h>
int main()
{
 char ch;
    FILE *fp = fopen("student.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file!");
        exit(0);
    }
    ch = getchar();
    while (ch != '\n')
    {
        putc(ch, fp);
        ch = getchar();
    }
    fclose(fp);
    return 0;


}