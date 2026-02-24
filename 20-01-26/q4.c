// wap to count the frequency of each element in an array.
#include <stdio.h>

void main()
{
    int arr[10], n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
                break;
        }

        if (i != j)
            continue;

        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        printf("%d occurs %d times\n", arr[i], count);
    }
}
