#include<stdio.h>
#include<math.h>

// declearation section
int Add(int, int);
int Sub(int, int);
int Mul(int, int);
float Div(int, int);
int Pow(int, int);
void callAll(int, int);
void Display(int, int, char);

int main(){
    int a, b;
    printf("Number : ");
    scanf("%d %d", &a, &b);
    callAll(a,b);
    
    return 0;
}

void DisplaySpecific(int a, int b, char ch)
{
    switch (ch)
    {
    case '+':
        printf("%d %c %d = %d",a,ch,b, Add(a,b));
        break;
    case '-':
        printf("%d %c %d = %d",a,ch,b, Sub(a,b));
        break;
    case '*':
        printf("%d %c %d = %d",a,ch,b, Add(a,b));
        break;
    case '/':
        printf("%d %c %d = %.4f",a,ch,b, Div(a,b));
        break;
    case '^':
        printf("%d %c %d = %d",a,ch,b, Add(a,b));
        break;
    
    default:
        printf("Enter Valid character\n");
        break;
    }
    printf("%d %c %d = %d",a,ch,b, Add(a,b));
}

// definitions sections
void callAll(int a,int b){
    printf("Sum of %d and %d is %d\n",a,b, Add(a,b));
    printf("Sub of %d and %d is %d\n",a,b, Sub(a,b));
    printf("Mul of %d and %d is %d\n",a,b, Mul(a,b));
    printf("Div of %d and %d is %.4f\n",a,b, Div(a,b));
    printf("Power of %d with %d is %d\n",a,b, Pow(a,b));
}

int Pow(int base, int expo)
{
    return pow(base,expo);
}
int Add(int a, int b)
{
    return a+b;
}
int Sub(int a, int b)
{
    return a-b;
}
int Mul(int a, int b)
{
    return a*b;
}
float Div(int a, int b)
{
    return (float)a/b;
}