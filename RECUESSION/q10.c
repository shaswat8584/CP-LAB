//Wap to print even or odd numbers from 1 to n using recursion.
#include <stdio.h>
void printEvenOdd(int n)
{
    if (n > 0)
    {
        printEvenOdd(n - 1);
        if (n % 2 == 0)
            printf("%d is even\n", n);
        else
            printf("%d is odd\n", n);
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printEvenOdd(n);
    return 0;
}
//output
//Enter a number: 3
//1 is odd
//2 is even
//3 is odd
