#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,e;
    int p,n,z;
    float a,f;
    p=0;
    n=0;
    z=0;
    cin>>a;
   for(i=0;i<a;i++)
   {
    cin>>e;

    if(e>0)
    {
        p+=1;
    }
    else if(e<0)
    {
        n+=1;
    }
    else
    {
        z+=1;
    }   
    
   }
   f=p/a;
   cout<<f<<endl;
   f=n/a;
   cout<<f<<endl;
   f=z/a;
   cout<<f<<endl;  
}
