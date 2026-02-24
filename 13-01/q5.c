//wap to input n number of elements into an array delete a particular position data
#include <stdio.h>
void main()
{
    int n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete element (0 to %d): ", n - 1);
    scanf("%d", &pos);
       // Shift elements to the left to delete element at position pos
    for (i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--; // Decrease the count of elements

    printf("Array after deletion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}