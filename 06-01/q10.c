//wap to enter 2 numbers in array and apend both arrays
#include <stdio.h>
void main() {
    int n1, n2, i;
    int arr1[50], arr2[50], result[100];

    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Append both arrays into result
    for (i = 0; i < n1; i++) {
        result[i] = arr1[i];
    }
    for (i = 0; i < n2; i++) {
        result[n1 + i] = arr2[i];
    }

    // Print the resulting array
    printf("Appended array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}