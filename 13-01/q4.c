// wap to input n number of elements into an array insert a new element in particular position
#include <stdio.h>
void main()
{
    int n, i, pos, newElem;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n + 1]; // Increase size to accommodate new element

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert new element (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter new element to insert: ");
    scanf("%d", &newElem);

    // Shift elements to the right to make space for new element
    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = newElem; 
    printf("Array after insertion:\n");
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
}