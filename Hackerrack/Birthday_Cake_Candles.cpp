#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,c,e;
    vector <int> v;
     cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>e;
        v.push_back(e);

    }

    sort(v.begin(),v.end());
    c=0;
    for(i=n-1;i>=0;i--)
    {
        if(v[i]==v[n-1])
        c++;
        else if(v[i]!=v[n-1])
        break;

    }
    cout<<c;

}