#include<stdio.h>
int ADD(int,int, int);

int main(){
    int number1,number2,number3, sum;
    printf("Enter a There numbers : ");
    scanf("%d %d %d", &number1, &number2, &number3);
    sum = ADD(number1, number2, number3);

    printf("The sum of %d, %d and %d is %d\n",number1, number2,number3, sum);

    for(int i = 1,result = 0;i <= 5; i++)
    {
        
        result = ADD(number1+i,number2+i,number3+i);
        printf("%d Result is %d\n",i,result);
    }

    return 0;
}

int ADD(int num1, int num2, int num3)
{
    int sum = num1 + num2 + num3;
    return sum;
}