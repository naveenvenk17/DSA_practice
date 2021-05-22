#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,e,k,c;
    
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>e;
        c=0;
        j=e;
        for(j;j>0;j)
        {
            k=j%10;
           
            if(k!=0)
            {
                if(e%k==0)
                c++;

            }
            j=j/10;
            
        }
        cout<<c<<endl;

    }



}