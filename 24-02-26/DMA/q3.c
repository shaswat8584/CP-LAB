// wap to find teh sum of two number by using realloc DMA
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, i, n;
    ptr = (int *)malloc(5 * sizeof(int));
    printf("Enter the number of elements:");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", ptr + i);
    int sum = 0;
    for (i = 0; i < n; i++)
        sum += *(ptr + i);
    printf("Sum of the numbers: %d\n", sum);
    free(ptr);
    return 0;
}
