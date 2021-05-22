#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,m,sum,c,k,e;
    vector <int> v;
    c=0;
    cin>>n>>k;

    for(i=0;i<n;i++)
    {
        cin>>e;
        v.push_back(e);
    }

    // sort(v.begin(),v.end());

    for(i=0;i<n;i++)
    {
       

        for(j=i+1;j<n;j++)
        {
            sum=v[i]+v[j];
            m=sum%k;
            if(m==0)
            c++;
        }

    }

    cout<<c;
}