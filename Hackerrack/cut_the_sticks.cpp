#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,k,e,s;
    vector <int> v;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>e;
        if(e!=0)
        v.push_back(e);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
      
    while(1)
    {
        k=*min_element(v.begin(),v.end());
        s=v.size();
        if(s==0)
        {break;}
        cout<<s<<endl;
        for(i=s-1;i>=0;i--)
        { 
            
            if(v[i]==k)
            v.pop_back();
            
        }
    }
    


}