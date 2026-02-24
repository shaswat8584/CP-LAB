// wap to find the sum of n number usinf malloc
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", ptr + i); 

    for (int i = 0; i < n; i++)
        sum += *(ptr + i);
    printf("Sum of the numbers: %d\n", sum);
    
    free(ptr); // free the allocated memory
    return 0;
}