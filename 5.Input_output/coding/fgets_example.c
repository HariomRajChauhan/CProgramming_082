#include<stdio.h>

int main(){
    char name[30];
    puts("Enter Name:");
    fgets(name,30,stdin);
    puts(name);
    return 0;
}