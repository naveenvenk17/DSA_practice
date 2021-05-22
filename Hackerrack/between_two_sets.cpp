#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,m,n,e;
    vector <int> v1;
    vector <int> v2;
    vector <int> v3;

    cin>>m>>n;

    for(i=0;i<m;i++)
    {
       cin>>e;
       v1.push_back(e);
    }

    for(i=0;i<n;i++)
    {
        cin>>e;
        v2.push_back(e);
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    for(i=2;2*i<v2[n-1];i++)
    {
        for(int j=0;j<n;j++)
        {
            if()
        }
    }

}