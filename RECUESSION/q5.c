//wap to find the sum of digits of a number using recursion
#include <stdio.h>
int sumOfDigits(int n) {
    if (n == 0) {
        return 0; // Base case: if n is 0, return 0
    }
    return (n % 10) + sumOfDigits(n / 10); // Recursive call with n/10 and add the last digit to the result
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = sumOfDigits(n); // Calculate the sum of digits of the given number
    printf("The sum of digits in %d is: %d\n", n, result);
    return 0;
}
//output
//Enter a number: 1234
//The sum of digits in 1234 is: 10