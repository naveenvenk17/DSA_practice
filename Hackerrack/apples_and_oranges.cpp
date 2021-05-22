#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,s,t,a,b,m,n,ma,oa,e;
    ma=0;
    oa=0;

    cin>>s>>t>>a>>b>>m>>n;

    for(i=0;i<m;i++)
    {
        cin>>e;
        e=m+e;

        if(e>=s && e<=t)
          { ma+=1;
          }


    }
     for(i=0;i<n;i++)
    {
        cin>>e;
        e=n+e;

        if(e>=s && e<=t)
          { oa+=1;
          }


    }

    cout<<ma<<endl<<oa;


}