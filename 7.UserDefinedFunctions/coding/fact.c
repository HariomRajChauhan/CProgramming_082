#include <stdio.h>
int factorial(int);

int main()
{
    int fact, num;
    printf("Enter Number: ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("\tFactorial = %d", fact);

    return 0;
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}