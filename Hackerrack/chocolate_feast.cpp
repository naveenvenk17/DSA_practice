#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,t,c,m;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>c>>m;
        int cho=0,wrap=0;
         cho+=n/c;
            wrap+=n/c;
        while(1)
        {
            c=wrap/2;
            cho+=c;
            wrap=wrap/2+wrap%2;
            if(wrap==1)
            break;



        }
        cout<<cho;
    }
    
}