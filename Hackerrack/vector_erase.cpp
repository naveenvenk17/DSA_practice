#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,b,c,d,i,e;

    vector<int> v;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>e;
        v.push_back(e);
    }
    cin>>b>>c>>d;

    v.erase(v.begin()+b-1);

    v.erase(v.begin()+c-1,v.begin()+d-1);
    int s=v.size();
    cout<<s<<endl;
    for(i=0;i<s;i++)
    {cout<<v[i]<<" ";
    }

}
