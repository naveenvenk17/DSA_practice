#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
        int i,j,e,n,k;
        cin>>n>>k;
        
        v.push_back(1);
        e=1;
        
        for(i=k;i!=0;i)
        {
            e=e+i;
            v.push_back(e);
            i=-i;
            if(i>0)
            i--;
            if(i<0)
            i++;
            
        }
        for(i=k+2;i<n+1;i++)
        {
            v.push_back(i);
        }

        for(i=0;i<n;i++)
        { cout<<v[i]<<" ";}
}