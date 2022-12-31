#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *ptr;
    printf("Enter the number of values you want to allocate in memory\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n , sizeof(int));
    printf("Enter the values\n");
    //if we do not take input from the user then it will start with zero autometically
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("Printing the values\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr + i));
    }
    free(ptr);
    return 0;
}