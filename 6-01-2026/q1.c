//wetie a c program to input a no. and check wheteher it is prime or not
#include <stdio.h>
int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not a prime number");
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("Not a prime number");
            break;
        }
    }

    if (i > num / 2) {
        printf("Prime number");
    }

    return 0;
}
