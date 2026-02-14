#include <stdio.h>
#define MAX 100
int main()
{
    char str[MAX];
    int length = 0, i = 0;

    printf("Enter a string : ");
    fgets(str, MAX, stdin);
    while (str[i] != '\0')
    {
        i++;
        length++;
    }
    length--;
    printf("The length is : %d", length);

    return 0;
}