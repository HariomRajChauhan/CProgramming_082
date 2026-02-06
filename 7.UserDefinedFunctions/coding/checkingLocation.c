#include<stdio.h>
int factorial(int );

int main(){
    char a, b,c,d;
    float e,f,g,h;
    int i,j,k,l;

    printf("Char_address = %p %p %p %p \n",&d, &c, &b, &a);
    printf("Float_address = %p %p %p %p \n",&h, &g, &f, &e);
    printf("Int_address = %p %p %p %p \n",&l, &k, &j, &i);
    
    return 0;
}