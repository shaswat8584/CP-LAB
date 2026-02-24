//Wap to convert a decimal number to binary using recursion.
#include <stdio.h>
void decimalToBinary(int n) {
    if (n > 0) {
        decimalToBinary(n / 2); // Recursive call with n divided by 2
        printf("%d", n % 2); // Print the remainder (0 or 1) after the recursive call
    }
}
int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("The binary representation of %d is: ", n);
    decimalToBinary(n); // Convert the decimal number to binary
    printf("\n");
    return 0;
}