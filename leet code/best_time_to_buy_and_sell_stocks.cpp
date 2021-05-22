#include <bits/stdc++.h>
using namespace std;

int main()
{   vector <int> prices;
  int n,small,large,d,i,j;
     for(i=0;i<6;i++)
     {
         cin>>j;
         prices.push_back(j);
     }
  
        int local_max=0,global_max=0;
        s=prices.size();
        for(i=1;i<s;i++)
        { j=i;
           while(j)
           {
               d=prices[i]-prices[j-1];
               j--;
               local_max=max(d,local_max);
           }
           global_max=max(local_max,global_max);

        }

}