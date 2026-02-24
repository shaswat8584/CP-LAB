//Wap to count the digits of a given number using recursion.
#include <stdio.h>
int countDigits(int n) {
    if (n == 0) {
        return 0; // Base case: if n is 0, return 0
    }
    return 1 + countDigits(n / 10); // Recursive call with n/10 and add 1 to the result
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = countDigits(n); // Count the digits of the given number
    printf("The number of digits in %d is: %d\n", n, result);
    return 0;
}
//output
//Enter a number: 12345
//The number of digits in 12345 is: 5