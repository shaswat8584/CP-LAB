// wap to input 3x3 matrix and find its trace of matrix
#include <stdio.h>
void main()
{
    int matrix[3][3], i, j;
    int trace = 0;
    printf("Enter elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        trace += matrix[i][i];
    }
    printf("The trace of the matrix is: %d\n", trace);
}