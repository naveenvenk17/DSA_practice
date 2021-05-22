#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n,d,temp,a,b,c;
    cin>>n;
    vector <string> v;
    
    for(i=0;i<n;i++)
     {   cin>>temp;
         for(j=0;j<n;j++)
         {
             a=temp%10;
             temp=temp/10;
             v.push_back(to_string(a));

         }
         cout<<v[n-1];
        for(j=n-1;j>=0;j--)
        {   
            if(v[j]<=v[j+1])
            cout<<v[j];

            else if(v[j]<v[j-1])
            cout<<v[j];

            else
            cout<<"X";
        }
        cout<<v[0]<<endl;
        v.clear();
        
     }
        
    
    
}