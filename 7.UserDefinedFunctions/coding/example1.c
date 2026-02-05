#include <stdio.h>
// Function Declear
void Display(int);

int main()
{
    int number;
    printf("Enter a Number : ");
    scanf("%d", &number);

    printf("Main - number is %d\n", number);
    Display(number);
    printf("Main - number is %d\n", number);
    return 0;
}

// Function Definition
void Display(int n)
{
    printf("Using a function number is %d\n", n);
}
