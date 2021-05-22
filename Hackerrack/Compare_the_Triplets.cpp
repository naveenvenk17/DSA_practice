#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,e,a,b;
    a=0;b=0;
    vector <int> v;

    for (i=0;i<6;i++)
    {
        cin>>e;
        v.push_back(e);
    }
    for(i=0;i<3;i++)
    {
        if(v[i]>v[3+i])
        a+=1;
        else if ( v[i]<v[3+i])
        b+=1;

    }
    cout<<a<<" "<<b;
}