//warp to print the sum of 2 numbers using pointers
#include <stdio.h>
void main() {
    int a, b, sum;
    int *ptr1, *ptr2;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    ptr1 = &a;
    ptr2 = &b;
    sum = *ptr1 + *ptr2;
    printf("The sum of %d and %d is: %d", a, b, sum);
}