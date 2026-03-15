#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr, i, n;
    
printf("Enter the size");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        scanf("%d", ptr + i);
        
}