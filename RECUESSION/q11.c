//Wap to calculate the power of a number using recursion.
#include <stdio.h>
double power(double base, int exp)
{
    if (exp == 0)
        return 1;
    else if (exp > 0)
        return base * power(base, exp - 1);
    else
        return 1 / power(base, -exp);
}
int main()
{
    double base;
    int exp;
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exp);
    double result = power(base, exp);
    printf("%.2lf raised to the power of %d is %.2lf\n", base, exp, result);
    return 0;
}
//output
//Enter the base: 2
//Enter the exponent: 3
//2.00 raised to the power of 3 is 8.00