#include<stdio.h>

int main(){
    unsigned int value, i;
    long long int fact;
    printf("Enter the Value : ");
    scanf("%u",&value);
    i = 1;
    fact =1;
    while(i<=value)
    {
        fact = fact * i;
        printf("fact of %u is %lld\n", i, fact);
        i++;
    }
    printf("\n%lld", fact);
    return 0;
}