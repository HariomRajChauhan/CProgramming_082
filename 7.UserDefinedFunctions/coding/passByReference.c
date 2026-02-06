#include<stdio.h>

void UpdateValue(int*, int*);

int main(){
    int num1,num2;
    printf("Enter num1 and num2 :");
    scanf("%d %d",&num1,&num2);

    printf("Before function call num1 %d and num2 %d\n", num1, num2);

    printf("Address of num1 %p and num2 %p\n", &num1, &num2);

    // calling the function
    UpdateValue(&num1,&num2);//reference -- address

    printf("After function call num1 %d and num2 %d", num1, num2);
    return 0;
}

void UpdateValue(int *a, int *b)
{
    *a =  2;
    *b = 3;
    printf("Address of a %p and b %p\n", a, b);
}
