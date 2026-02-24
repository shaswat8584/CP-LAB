// wap to input n number of elements into an array search a particular element
#include <stdio.h>
void main()
{
    int n, i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Element %d found in the array at index %d.\n", key, i);
            break;
        }
        else
        {
            printf("Element %d not found in the array.\n", key);
        }
    }
}
