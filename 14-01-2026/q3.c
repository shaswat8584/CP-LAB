// wap to input 3x3 matrix and display its diagonal matrix
#include <stdio.h>
void main()
{
    int matrix[3][3], i, j;
    printf("Enter elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The diagonal matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                printf("%d\t", matrix[i][j]);
            }
            else
            {
                printf("0\t");
            }
        }
        printf("\n");
    }
}