// wap to input a mxn matrix. find the adressess of the (i,j)th index in row major ordering.
#include <stdio.h>
void main()
{
    int m, n, i, j;
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    int matrix[m][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int row_index, col_index;
    printf("Enter the indices (i j) to find the address: ");
    scanf("%d %d", &row_index, &col_index);

    if (row_index >= 0 && row_index < m && col_index >= 0 && col_index < n)
    {
        int address = 1050 + (row_index * n + col_index) * sizeof(int);
        printf("The address of element [%d][%d] is: %p\n", row_index, col_index, (void *)address);
    }
    else
}
