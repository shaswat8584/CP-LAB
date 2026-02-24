//Wap to print the largest element in an array using recursion.
#include <stdio.h>
int largest(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    else
    {
        int max = largest(arr, n - 1);
        return (arr[n - 1] > max) ? arr[n - 1] : max;
    }
}
int main()
{
    int arr[100], n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int max = largest(arr, n);
    printf("The largest element in the array is: %d\n", max);
    return 0;
}
//output
//Enter the number of elements in the array: 5
//Enter the elements of the array: 3 7 2 9 5
//The largest element in the array is: 9