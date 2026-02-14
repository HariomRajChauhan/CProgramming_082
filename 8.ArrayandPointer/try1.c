#include <stdio.h>
int SUM(int arr[][3], int row);
int main()
{
    int arr2[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("The sum is %d \n", SUM(arr2, 2));
    return 0;
}

int SUM(int arr[][3], int row)
{
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    return sum;
}