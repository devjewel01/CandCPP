#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int f[n+5];
    f[0] = 0;
    f[1] = 1;
    for(int i=2; i<=n; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
    for(int i=0; i<=n; i++)
    {
        cout<<f[i]<<" ";
    }
    return 0;
}