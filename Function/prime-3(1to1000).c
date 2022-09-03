#include<stdio.h>
#include<stdbool.h>

bool isPrime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    int x;
    printf("Listing prime numbers from 1 to 1000\n");
    for(int x=1; x<=1000; x++)
    {
        if(isPrime(x))
            printf("%d\n", x);
    }
    return 0;
}
