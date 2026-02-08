#include<stdio.h>
int SumArray(int [], int );
void InputArray(int [], int);
void Display(int [], int);
void ModifyArray(int [], int); 
int main(){
    int sum = 0, size = 5;
    int arr[size];
    InputArray(arr, size);
    Display(arr, size);

    sum = SumArray(arr, size);
    printf("\nThe Sum is %d\n",sum);

    ModifyArray(arr, size);
    Display(arr, size);

    return 0;
}

void InputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}

void ModifyArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i]*2;
    }
    
}

void Display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}

int SumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum; 
}