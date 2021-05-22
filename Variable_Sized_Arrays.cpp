#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,k,val,x,y;
    
     cin>>n>>q;
    vector < vector < int >> v1;

    for (int i=0;i<n;i++)
    {
        cin>>k;
        vector <int> v2;

        for( int j=0;j<k;j++)
        {
         cin>>val;
         v2.push_back(val);


        }
          v1.push_back(v2);
    }

    for(int i=0;i<q;i++)
    {    
        cin>>x>>y;
        cout<<v1[x][y]<<"\n";
    }
} 