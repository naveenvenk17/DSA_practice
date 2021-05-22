#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,m,n,a,b,e,s,c;
    vector <int> v;
    c=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>e;
        v.push_back(e);
    }

    cin>>a>>b;

    for(i=0;i<n;i++)
    {   s=0;
        j=i;
        for(j;j<i+b;j++)
        {
            s+=v[j];
        }

        if(s==a)
        c++;

    }
    cout<<c;
}