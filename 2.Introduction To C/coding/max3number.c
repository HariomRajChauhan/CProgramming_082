#include<stdio.h>

int main(){
    // Find the largest among three numbers using ternary operator?
    int a, b, c;
    printf("Enter a, b, c :");
    scanf("%d %d %d",&a,&b,&c);
    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("Max = %d",max);
    return 0;
}