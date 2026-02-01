#include<stdio.h>
#define PI 3.14

int main(){
    float A, B, Area;

    printf("Enter A and B :\n");
    scanf("%f %f",&A,&B);

    Area = PI *A *B;

    printf("The Area is : %f",Area);

    return 0;
}