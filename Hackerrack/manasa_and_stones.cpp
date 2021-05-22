#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,t,a,b,diff,sum,temp;
    
    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>n>>a>>b;
        if(a>b)
        {
            temp=b;
            b=a;
            a=temp;
        }
        
    
        diff=b-a;
        sum=a*(n-1);
        cout<<sum<<" ";
        for(j=1;j<=n-1;j++)
        { sum=sum+diff;
          cout<<sum<<" ";  
        }
        }
        cout<<endl;

    }

    