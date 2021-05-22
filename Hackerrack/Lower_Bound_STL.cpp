#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e,q;
    vector <int> v1;
    vector <int> v2;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>e;
        v1.push_back(e);
    }
     
     cin>>q;
     
     for(int i=0;i<q;i++)
     { 
         cin>>e;
         for(int j=0;j<n;j++)
         {
             if(e==v1[j])
             {cout<<"Yes "<<j+1<<endl;
             break;}

             else if(v1[j]>e)
             {cout<<"No "<<j+1<<endl;
             break;}

         }   
     }

}