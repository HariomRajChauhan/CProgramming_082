#include<stdio.h>

int main(){
    // increment and decrement
    int a = 10;

    printf("A = %d ",a);
    printf("A = %d ",a++); // post incre
    printf("A = %d ",++a); // pre
    printf("A = %d ",a--); // post decre
    printf("A = %d ",--a); // pre
    printf("A = %d ",a);
    return 0;
}