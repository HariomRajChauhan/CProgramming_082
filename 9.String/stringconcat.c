#include<stdio.h>
#define MAX 100
int main(){
    char str1[MAX], str2[MAX];
    int length = 0, i=0;

    printf("Enter First string : ");
    fgets(str1,MAX,stdin);
    printf("Enter Second string : ");
    fgets(str2,MAX,stdin);

    while (str1[i]!='\0')
    {
        i++;
    }
    i--;
    str1[i] = ' ';

    


    printf("The length is : %d",length);

    return 0;
}