// wap to input a mxn matrix. find the adressess of the all (i,j)th index in row major ordering.
#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the number of rows (m) and columns (n): ");
    scanf("%d%d", &m, &n);

    int matrix[m][n]; // Declare a 2D array (matrix)

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the addresses of each element in row-major order
    printf("Addresses of the elements in row-major order:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Address of element at (%d, %d): %p\n", i, j, (void *)&matrix[i][j]);
        }
    }

    return 0;
}

// Enter the number of rows (m) and columns (n): 2 2
// Enter the elements of the matrix:
// 1 2 3 4
// Addresses of the elements in row-major order:
// Address of element at (0, 0): 0061FEA0
// Address of element at (0, 1): 0061FEA4
// Address of element at (1, 0): 0061FEA8
// Address of element at (1, 1): 0061FEAC
