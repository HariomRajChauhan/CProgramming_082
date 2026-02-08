#include<stdio.h>
int main()
{
    int i,j,prime;
    for(i=1;i<=100;i++)
    {
        prime=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime=1;
                break;
            }
        }
        if(prime==0)
        {
                    printf("%d\t",i);
        }
    }
    return 0;
}