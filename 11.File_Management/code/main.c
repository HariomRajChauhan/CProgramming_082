#include <stdio.h>

int main()
{
    FILE *fp;
    if (fp == NULL)
    {
        printf("File cannot open");
    }
    char data[50];
    char ch;
    fp = fopen("text1.txt", "r");
    fscanf(fp, "%s", data);
    long pos = ftell(fp);
    printf("%ld\n", pos);
    rewind(fp);
    pos = ftell(fp);
    printf("%ld", pos);
    return 0;
}