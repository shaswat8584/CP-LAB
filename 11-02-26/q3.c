//wap to count the total number of duplicate elements in an array using functions
#include<stdio.h>
int countDuplicates(int arr[], int n)
{
    int count = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}
void main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result = countDuplicates(arr, n);
    printf("The total number of duplicate elements in the array is: %d", result);
}