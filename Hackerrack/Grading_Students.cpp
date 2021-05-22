#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,e,s;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>e;

        if(e<38)
        {
            cout<<e<<endl;
        }
        else if(e>37)

        {s=e%5;
        if(s<3)
        cout<<e<<endl;
        else 
        {e=e+5-s;
        cout<<e<<endl;
        }
        }


    }
    
}