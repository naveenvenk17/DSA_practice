#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,e;
    int sum=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
     cin>>e;
     sum+=e;
    }
    cout<<sum;
}