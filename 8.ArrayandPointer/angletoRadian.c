#include <stdio.h>
#include <math.h>
#define PI 22.0/7.0

float degreeToRadian(float);
float radianToDegree(float);

int main()
{
    float angle = 30, sineValue;

    sineValue = sin(degreeToRadian(angle));
    printf("sine of %.2f is %.4f\n", angle, sineValue);

    return 0;
}

float degreeToRadian(float degree)
{
    return ((PI / 180) * degree);
}
float radianToDegree(float radian)
{
    return ((180 / PI) * radian);
}