#include<stdio.h>
void reverseString(char *);
int main(){
    char Name[10] = "Hariom";
    reverseString(Name);
    return 0;
}




void reverseString(char *str)
{
    char *end = str;
    while (*end)
        end++;
    end--;
    while (str < end)
    {
        char temp = *str;
        *str++ = *end;
        *end-- = temp;
    }
}