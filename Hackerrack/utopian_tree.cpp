// BRUTE FORCE
#include <bits/stdc++.h>
using namespace std;

int main()
{int i,j,k,n,e,h;
    vector <int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>e;
        v.push_back(e);
    }
     
  for(i=0;i<n;i++)
   {   h=0;
    for(j=0;j<=v[i];j++)
     {   

      k=j%2;
      if(k==0)
       h+=1;
      else
      h*=2;

    }
     cout<<h<<endl;
  }




 
  }
