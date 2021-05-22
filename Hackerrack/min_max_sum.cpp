#include <bits/stdc++.h>
using namespace std;

int main()
{
    long  long int i,n,e,min,max,sum=0;
    vector <int> v;

    for(i=0;i<5;i++)
    {
        cin>>e;
        v.push_back(e);
        sum+=e;

    }


    min=*min_element(v.begin(),v.end());
    max=*max_element(v.begin(),v.end());
    cout<<sum-max<<" "<<sum-min;
}