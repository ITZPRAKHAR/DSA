#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *ptr, *ptr1;
    printf("Enter the number of values you want to allocate in memory\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the values\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    // printf("Printing the values\n");
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d\n", *(ptr + i));
    // }
    printf("Enter the new value of n you want to increase or decrease\n");
    scanf("%d", &n);
    ptr1 = (int *)realloc(ptr, n * sizeof(int));
    printf("Enter the values\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr1 + i));
    }
    printf("Printing the values\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr1 + i));
    }
    free(ptr1);
    return 0;
}