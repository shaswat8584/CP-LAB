//Wap to calculate the sum of numbers from 1 to n using recursion.
#include <stdio.h>
int sum(int n) {
    if (n == 1) {
        return 1; // Base case: sum of first 1 natural number is 1
    }
    return n + sum(n - 1); // Recursive call with n-1 and add n to the result
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = sum(n); // Calculate the sum of numbers from 1 to n
    printf("The sum of numbers from 1 to %d is: %d\n", n, result);
    return 0;
}
//output
//Enter a number: 5
//The sum of numbers from 1 to 5 is: 15