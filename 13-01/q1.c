// wap to input n number of elements into an array, display reverse order
#include <stdio.h>
void main()
{
    int n, i;

    printf("Enter number of elements:\n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements in reverse order:\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}