#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int)); // allocate at runtime
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
        scanf("%d", &ptr + i);

    for (int i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
    return 0;
}