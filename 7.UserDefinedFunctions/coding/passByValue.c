#include<stdio.h>

void CopyValue(int, int);

int main(){
    int num1,num2;
    printf("Enter num1 and num2: ");
    scanf("%d %d",&num1,&num2);

    printf("Before function call num1 %d and num2 %d\n", num1, num2);

    printf("Address of num1 %p and num2 %p\n", &num1, &num2);

    // calling the function
    CopyValue(num1,num2);//passed -- value -- just copy the value

    printf("After function call num1 %d and num2 %d", num1, num2);
    return 0;
}

void CopyValue(int a, int b)
{
    a =  2;
    b = 3;
    printf("Address of a %p and b %p\n", &a, &b);
}
