#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,t,j,k,d,l;
    string s1;
    vector <int> v;
    int c=0,y=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
             cin>>n;
             cin>>s1;
            sort(s1.begin(),s1.end());
            auto it = upper_bound(s1.begin(),s1.end(),'_');
            s1.erase(s1.begin(),it);
            d=0;
            l=s1.length();
            if(l==0)
            cout<<"YES"<<endl;
            else{
            
                for(j=0;i<l-2;j++)
                {if(s1[j+1]!=s1[j] && s1[j+1]!=s1[j+2])
                    {
                        d++;
                        cout<<"NO"<<endl;
                        break;
                    }
                }
                if(d==0)
                {
                    if(s1[l-1]!=s1[l-2])
                    cout<<"NO"<<endl;

                    else if (s1[l-1]==s1[l-2])
                    cout<<"YES"<<endl;
                }
                
            }

      }
}
