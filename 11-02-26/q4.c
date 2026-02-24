//wap to merger to array of the same size sorted in decending order
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);
    int arr1[n], arr2[n], merged[2*n];
    printf("Enter the elements of the first array in descending order: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the second array in descending order: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    // Merging the two arrays
    for(int i=0; i<n; i++)
    {
        merged[i] = arr1[i];
        merged[n+i] = arr2[i];
    }
    // Sorting the merged array in descending order
    for(int i=0; i<2*n-1; i++)
    {
        for(int j=0; j<2*n-i-1; j++)
        {
            if(merged[j] < merged[j+1])
            {
                int temp = merged[j];
                merged[j] = merged[j+1];
                merged[j+1] = temp;
            }
        }
    }
    printf("The merged array sorted in descending order is: ");
    for(int i=0; i<2*n; i++)
    {
        printf("%d ", merged[i]);
    }
}