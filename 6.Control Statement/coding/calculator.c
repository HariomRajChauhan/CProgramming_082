#include<stdio.h>

int main(){
    char ch;
    int a, b;
    printf("Enter a,b and ch :");
    scanf("%d %d %c",&a,&b,&ch);
    
    switch (ch)
    {
    case '+':
        printf("Add : %d + %d is %d",a,b,a+b); break;
    case '-':
        printf("Sub : %d - %d is %d",a,b,a-b); break;
    case '*':
        printf("Mul : %d * %d is %d",a,b,a*b); break;
    case '/':
        float res;
        res = (float)a/b;
        printf("Div : %d / %d is %f",a,b,res); break;
    
    default:
        printf("Enter a valid operator\n");
        break;
    }
    return 0;
}