//wap tp check wheather a matrix is symmetric or not
#include<stdio.h>
void main()
{
    int a[10][10],i,j,m,n;
    printf("Enter the order of the matrix:");
    scanf("%d%d",&m,&n);    
    printf("Enter the elements of the matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(m!=n)
    {
        printf("The matrix is not symmetric");
    }
    else
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]!=a[j][i])
                {
                    printf("The matrix is not symmetric");
                    return;
                }
            }
        }
        printf("The matrix is symmetric");
    }

}