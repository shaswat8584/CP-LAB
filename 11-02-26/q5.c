//wap to sumof right digonal elements of a matrix
#include<stdio.h>
void main()
{
    int i,j,m,n,sum=0;
    printf("Enter the order of the matrix:");
    scanf("%d%d",&m,&n);    
    int a[m][n];
    printf("Enter the elements of the matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        sum+=a[i][n-i-1];
    }
    printf("The sum of the right diagonal elements of the matrix is: %d",sum);
}