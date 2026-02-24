// wap to input n number of elements into an array add all the even elements and multiply all the odd elements
#include <stdio.h>
void main()
{
    int n, i, sum = 0, prod = 1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
        else
        {
            prod *= arr[i];
        }
    }

    printf("Sum of all even elements: %d\n", sum);
    printf("Product of all odd elements: %d\n", prod);
}