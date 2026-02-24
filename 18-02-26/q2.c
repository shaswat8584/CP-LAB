//wap to find the sum of array elements using pointer.
#include <stdio.h>
void main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += *ptr;
        ptr++;
    }

    printf("Sum of array elements: %d\n", sum);
}