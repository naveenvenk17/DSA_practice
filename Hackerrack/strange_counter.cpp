#include <bits/stdc++.h>
using namespace std;

int main()
{
 long long int n,k,i=1,j,sum_low,sum_up,low;
 unordered_map <int,int> m;
 cin>>n;
 
//  float sum=1.5;i=1;

//       for(j=1;i<n+1;j++)
//       {   
//           sum=sum*2;
//           k=sum;
            
//             for(i;k>0;k--)
//             {
//                 m[i]=k;
//                 i++;
//             }

//       }

//       cout<<m.at(n);
     if(n<=3)
     {if(n==1)
        cout<<3;
      else if(n==2)
         cout<<2;
      else
        cout<<1;    
    }
     else
     { 
           sum_low =3;
          for(k=1;6*k<n;k++)
          {
             sum_low=sum_low+6*k;

          }
          sum_up=sum_low+6*k;
          low=sum_low+1;
          int p=6*k;
          for(low;p>0;p--)
            {
                m[low]=p;
                low++;
            }
            cout<<m.at(n);
     }

}