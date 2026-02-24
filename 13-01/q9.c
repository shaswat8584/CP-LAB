//wap to ensure no. and find the binary value by using array
#include <stdio.h>
void main() {
    int n, i = 0;
    int binary[32]; // Assuming a 32-bit integer

    printf("Enter a number: ");
    scanf("%d", &n);

    // Convert to binary and store in array
    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }

    // Print binary number in reverse order
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}