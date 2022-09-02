#include<stdio.h>

float add(float x, float y)
{
    float s = x + y;
    return s;
}
int main()
{
    float a, b;
    printf("Enter 2 numbers : ");
    scanf("%f%f", &a, &b);
    float c = add(a, b);
    printf("Sum = %f\n", c);
    return 0;
}