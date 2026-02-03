#include<stdio.h>

int main(){
    int a = 2, b= 3, c;
    printf("A = %d, B = %d, C = %d\n", a,b,c);
    a = (b++) + (++b) +a;
    printf("A = %d, B = %d, C = %d\n", a,b,c);
    c = a>b ?a:b;
    printf("A = %d, B = %d, C = %d\n", a,b,c);
    b = (a++)+(b--)+a;
    printf("A = %d, B = %d, C = %d\n", a,b,c);
    c = c++*b--;
    printf("A = %d, B = %d, C = %d\n", a,b,c);
    return 0;
}