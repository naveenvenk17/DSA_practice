#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,e,r,c=1;
    vector <int> v;

    cin>>n;

    for( i=0;i<n;i++)
    {
        cin>>e;
        

        while(e!=0)
        {
           r=e%10;
           e=e/10;
           c++;
           v.push_back(r);
        }

        for(int j=0;j<c;j++)
        {
            if(v[j]!=0)
            {
                for(int k=j;k<c;k++)
                cout<<v[k];
            }
            
        }
    }


}