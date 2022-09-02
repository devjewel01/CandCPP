#include<stdio.h>
#include<stdbool.h>

bool isPrime(int x)
{
    for(int i=2; i<x; i++)
    {
        if(x%i == 0)
            return false;
    }
    return true;
    
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if(isPrime(n))
        printf("It is prime\n");
    else 
        printf("It is not prime\n");
}
