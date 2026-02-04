#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i < 10; i++)
    {

        printf("%d\n", i);
        continue;
        printf("%d\n", i + 1);
    }

    return 0;
}