#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,e,n;
    cin>>n;
    vector <int> v;
        for(i=0;i<n;i++)
        {
            cin>>e;
            v.push_back(e);
        }

     sort(v.begin(),v.end());
     vector <int> :: iterator it = upper_bound(v.begin(),v.end(),*min_element(v.begin(),v.end()));
     if(it==v.end())
     cout<<"NO"<<endl;
     else 
     cout<<*it<<endl;

}