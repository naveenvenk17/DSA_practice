#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,k;
    string str;
    cin>>n;
    unordered_map <string,int> m;

    for(i=1;i<=n;i++)
    {
        cin>>str;
        
        if(m.find(str)==m.end())
        {
            m[str]=i;
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }

    
}