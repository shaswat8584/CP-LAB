//wap tp print the elements of a matrix in major ordering in coulmn wise
#include<stdio.h>
void main()
{
    int i,j,m,n;
    printf("Enter the order of the matrix: \n");
    scanf("%d%d",&m,&n);    
    int a[m][n];
    printf("Enter the elements of the matrix: \n");
    for(i=0;i<m;i++)
    { 
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The elements of the matrix in major ordering in column wise are:\n");
    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}