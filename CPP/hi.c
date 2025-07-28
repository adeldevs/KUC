#include <stdio.h>

int main()
{
    int i, n = 5, pos, val;
    int arr[n] = {1, 2, 3, 4, 5};

    for (i = 0; i < n; i++)
    {
        printf(" %d\t", arr[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("[%d]     ", i);
    }

    printf("\nposition of the array elements : ");
    scanf("%d", &pos);

    printf("\nvalue : ");
    scanf("%d", &val);

    for (i = n; i < pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;

    n++;
    printf("\nAfter insertion\n");
    for (i = 0; i < n; i++)
    {
        printf(" %d\t", arr[i]);
    }

    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("[%d]     ", i);
    }
    printf("\n");
    return 0;
}