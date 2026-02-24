// wap to merge two arrays of same size and sort it in descending order.
#include <stdio.h>
void main()
{
    int n, i, j, temp;
    printf("Enter the number of elements in each array: ");
    scanf("%d", &n);
    int arr1[n], arr2[n], merged[2 * n];
    printf("Enter %d elements for the first array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter %d elements for the second array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i < n; i++)
    {
        merged[i] = arr1[i];
        merged[n + i] = arr2[i];
    }
    for (i = 0; i < n; i++)
    {
    }
      for (i = 0; i < 2 * n - 1; i++)
    {
        for (j = i + 1; j < 2 * n; j++)
        {
            if (merged[i] < merged[j])
            {
                temp = merged[i];
                merged[i] = merged[j];
                merged[j] = temp;
            }
        }
    }
    printf("Merged and sorted array in descending order:\n");
    for (i = 0; i < 2 * n; i++)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");
}