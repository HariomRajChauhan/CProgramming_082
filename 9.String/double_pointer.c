#include <stdio.h>
int main()
{
    int x = 100;
    int *ptr1;
    ptr1 = &x;
    int **ptr2;
    ptr2 = &ptr1;
    printf("%d %d %d", x, *ptr1, **ptr2);
    return 0;
}