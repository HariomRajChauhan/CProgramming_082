#include<stdio.h>

int main(){
    // ternary operator
    // Find the largest among two numbers using ternary operator?
    int a, b;
    printf("Enter a and b :");
    scanf("%d %d",&a,&b);
    int max = (a>b)?a:b;
    printf("Max = %d",max);
    return 0;
}