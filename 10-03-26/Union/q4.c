#include <stdio.h>
union struc
{
    char ch;
    int x;
    float y;
} u1;

int main()
{
    u1.ch = 'A';
    printf("Character: %c\n", u1.ch);
    u1.x = 65;
    printf("Integer: %d\n", u1.x);
    u1.y = 65.0;
    printf("Float: %.2f\n", u1.y);
    printf("Character: %c\n", u1.ch);
    return 0;
}
