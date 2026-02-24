// Wap to print fibonacci series up to n terms using recursion.
#include <stdio.h>
void fibonacci(int n)
{
    if (n == 1)
    {
        printf("0 ");
    }
    else if (n == 2)
    {
        printf("0 1 ");
    }
    else
    {
        int a = 0, b = 1, c;
        printf("%d %d ", a, b); // Print the first two terms
        for (int i = 3; i <= n; i++)
        {
            c = a + b;        // Calculate the next term in the series
            printf("%d ", c); // Print the current term
            a = b;            // Update a to the previous term
            b = c;            // Update b to the current term
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series up to %d terms: ", n);
    fibonacci(n); // Print Fibonacci series up to n terms
    return 0;
}
//output
//Enter the number of terms: 7
//Fibonacci series up to 7 terms: 0 1 1 2 3 5 8