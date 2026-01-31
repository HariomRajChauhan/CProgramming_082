#include<stdio.h>

int main()
{
    int a,b;
    a = 10;
    b=5;
    printf("Afetr\na = %d, b =%d\n",a,b);

    a = (a+b)-(b=a);
    printf("Before\na = %d, b =%d",a,b);
    return 0;
}