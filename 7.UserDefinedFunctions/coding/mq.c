#include<stdio.h>
void add(int);
int num1 = 10;

int main(){

    auto int num;
    static int count;
    printf("Enter a numbers : ");

    num1 = 9;

    scanf("%d", &num);
    printf("NUmber is %lld count = %d \n %d\n",&num, count, num1);
    add(6);
    return 0;
}

void add(int a)
{
    int num2 = 20;
    printf("%d %d", a, num1);
}