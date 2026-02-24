// wap to count the total number of duplicate elements in an array.
#include <stdio.h>
void main()
{
    int n, i, j, count = 0;
    int dig[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                if (key[arr[i]] == 0)
                    key[arr[i]] = 1;
                else
                    break;

                break;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        if (key[dig[i]] == 1)
            count++;
    }
    printf("Total number of duplicate elements in the array: %d\n", count);
}
