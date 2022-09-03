#include<stdio.h>
#include<stdbool.h>

bool isPrime(int n)
{
    int d = 0;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
            d++;
    }
    if (d==2) 
        return true;
    else 
        return false;
}

int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    if(isPrime(x))
        printf("It is a prime\n");
    else 
        printf("It is not prime\n");
    return 0;
}
