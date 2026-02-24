//wap to find maximum element of array using pointer.
#include <stdio.h>
void main()
{
    int arr[5] = {10, 20, 5, 40, 50};
    int *ptr = arr;
    int max = *ptr;

    for (int i = 0; i < 5; i++) {
        if (*ptr > max) {
            max = *ptr;
        }
        ptr++;
    }

    printf("Maximum element in the array: %d\n", max);
}