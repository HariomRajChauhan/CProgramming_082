#include <stdio.h>
#define MAX 5
int main()
{
    int a[MAX] = {10, 20, 70, 40, 50};

    for (int i = 0; i <= MAX - 1; i++)
    {
        printf("AT Index %d = %d\n", i, a[i]);
    }

    for (int i = 0; i <= MAX - 1; i++)
    {
        scanf("%d ", &a[i]);
    }

    for (int i = 0; i <= MAX - 1; i++)
    {
        printf("Updated value Index %d = %d\n", i, a[i]);
    }

    return 0;
}