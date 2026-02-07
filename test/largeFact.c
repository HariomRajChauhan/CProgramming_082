#include <stdio.h>
int main ()
{ // largest among three numbers
    int a,b,c;
    printf("Enter three numbers :");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if (b>c)
        {
            printf("greatest is %d",a);
        }
        else
        {
            printf("greatest is %d",c);
        }
        
        
    }
    else
        {
        if (b>c)
        {
            printf("greatest is %d",b);
         }
        else
    
        {
              printf("greatest is %d",c);
        }
    }
        return 0;
}