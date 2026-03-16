//wap to print the content of file
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    FILE *fp = fopen("student.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file!");
        exit(0);
    }
    while ((ch = getc(fp)) != EOF)
    {
        // putchar(ch);
        // printf("%c", ch);
        if (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U')
        {
            printf("%c ", ch);
        }
    }
    fclose(fp);
    return 0;
}