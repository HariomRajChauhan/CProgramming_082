#include <stdio.h>

int main()
{
    int *ptr;
    int x = 20;

    ptr = &x;

    printf("Tycasted address  %d \n", ptr);
    printf("Address %p \n", ptr);
    printf("x-value %d \n", *ptr);

    char str[] = "HELLO WORLD";
    char *ptrc = str;
    printf("%c", *(ptrc + 1));
    return 0;
}