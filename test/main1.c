#include<stdio.h>
#define pi 3.14

int main(){
    float A,B,Area;
    printf("Enter A and B : \n");
    scanf("%f %f",&A, &B);
    Area = pi * A * B;
    printf("Area = %.3f",Area);
    return 0;
}