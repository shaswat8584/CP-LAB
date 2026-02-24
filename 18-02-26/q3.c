//wap to find minimum element of array using pointer.
#include <stdio.h>
void main()
{
    int arr[5] = {10, 20, 5, 40, 50};
    int *ptr = arr;
    int min = *ptr;

    for (int i = 0; i < 5; i++) {
        if (*ptr < min) {
            min = *ptr;
        }
        // printf("%p\n", &arr[i]); 
        ptr++;
    }

    printf("Minimum element in the array: %d\n", min);
}