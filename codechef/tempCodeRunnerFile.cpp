#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,e,r,c=0;
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
           cout<<r;

        }  
        cout<<endl;  
            }


}