#include<stdio.h>
// passing an array to a function
#define MAX 5
void Display(int []);
int main(){
    int arr[MAX] = {10,20,40,444,66};

    Display(arr);
    
    int many[MAX] = {33,355};


    Display(many);
    return 0;
}



void Display(int a[])
{
    // traversing 
    for (int i = 0; i < MAX; i++)
    {
       printf("INdex %d = %d\n",i, a[i]); 
    }
    
    
}