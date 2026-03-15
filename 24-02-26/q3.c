#include<stdio.h>
void calcu(int x, int y, int *sum, int *diff, int *prod, int *div)
{
    *sum = x + y;
    *diff = x - y;
    *prod = x * y;
    if (y != 0 && x != 0) {
        *div = x / y;
    } else {
        *div = 0; 
}
}
int main()
{
    int a, b,c, d, e, f;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    calcu(a, b, &c, &d, &e, &f);
    printf("Sum: %d\n", c);
    printf("Difference: %d\n", d);
    printf("Product: %d\n", e);
    if (b != 0 && a != 0) {
        printf("Division: %d\n", f);
    } else {
        printf("Division by zero is not allowed.\n");
    }
    return 0;
}
