#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,m,e,min,max,a,b,c;
    min=0;max=0;

    cin>>m;
    cin>>a;
    b=a;
    c=a;

    for(i=1;i<m;i++)
    {
        cin>>e;
        
        if(e>b)
        {max+=1;
        b=e;
        }

        else if(e<c)
        {  min+=1;
           c=e;
        }

    }

    cout<<max<<" "<<min;
}