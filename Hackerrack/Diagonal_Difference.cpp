# include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i,n,e,a,b;
    a=0;b=0;
    vector <int> v;
    cin>>n;
    for( i=0;i<n*n;i++)
    {
        cin>>e;
        v.push_back(e);
    }
    // for(i=0;i<n*n;i++)
    // {cout<<v[i]<<endl;}
    for(i=0;i<n*n;i+=n+1)
    {
        a+=v[i];
    }
    for(i=n*n-n;i>0;i-=n-1)
    {
        b+=v[i];
    }
    
    if(a>=b)
    {cout<<a-b;}
    else
    cout<<b-a;
}