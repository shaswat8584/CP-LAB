// wap to copy the elements of one array to another array.
#include <stdio.h>
void main()
{
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("Elements in the second array are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
}