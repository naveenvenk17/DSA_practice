#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,e;
    vector <int> v;
    cin>>n;
    for(i=0;i<5;i++)
    {
        v.push_back(0);
    }

    for(i=0;i<n;i++)
    {
        cin>>e;
        v[e-1]++;

    }
//     for(i=0;i<5;i++)
//     cout<<v[i];

//     cout<<endl;
//    int k=v[max_element(v.begin(),v.end())-v.begin()];
    int m=v[0];
    int k=0;
    for(i=1;i<5;i++)
    {
        if(v[i]>m)
        {
            m=v[i];
            k=i;
        }

    }


   cout<<k+1;

}