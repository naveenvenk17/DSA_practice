#include <bits/stdc++.h>
using namespace std;

int main()
{
     long long int i,n,a,b,sum=0;
      cin>>n;

      for(i=1;i<=n;i++)
      {
          cin>>a>>b;
          sum+=a*(b-1)+b*(n-b);
      }   
      cout<<sum;
}