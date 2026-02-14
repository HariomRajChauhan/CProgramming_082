#include <stdio.h>

void SWAP(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int MAXFInd(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int a = 10, b = 50;
    printf("a %d b %d\n", a, b);
    SWAP(&a, &b);

    printf("a %d b %d\n", a, b);
    
    int arr[10] = {10,2344,33445,233456,33,32,4455,33,322,345};
    int max = MAXFInd(arr, 10);
    printf("MAX %d\n",max);


    return 0;
}