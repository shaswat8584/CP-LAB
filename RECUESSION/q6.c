//Wap to find the GCD of two numbers using recursion.
#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0) {
        return a; // Base case: if b is 0, return a as the GCD
    }
    return gcd(b, a % b); // Recursive call with b and the remainder of a divided by b
}   
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int result = gcd(num1, num2); // Calculate the GCD of the two numbers
    printf("The GCD of %d and %d is: %d\n", num1, num2, result);
    return 0;
}