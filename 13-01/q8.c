//wap to accept no. the occurence of specifc digit then eg 5346 delete 5 o/p 23 using array
#include <stdio.h>
void main() {
    int n, digit, i, j = 0;
    int arr[10], result[10]; // Assuming a maximum of 10 digits

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the digit to delete: ");
    scanf("%d", &digit);

    // Extract digits and store in arr
    while (n > 0) {
        arr[j] = n % 10;
        n /= 10;
        j++;
    }

    // Reverse the array to get the original order
    for (i = 0; i < j / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[j - i - 1];
        arr[j - i - 1] = temp;
    }

    // Create result array excluding the specified digit
    int k = 0;
    for (i = 0; i < j; i++) {
        if (arr[i] != digit) {
            result[k] = arr[i];
            k++;
        }
    }

    // Print the resulting number
    printf("Number after deleting digit %d: ", digit);
    for (i = 0; i < k; i++) {
        printf("%d", result[i]);
    }
    printf("\n");
}