#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,s,t,b,w,bc,wc,z;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>b>>w>>bc>>wc>>z;

        if(bc+z<wc)
        {
            s=b*bc+w*(bc+z);
        }
        else if(bc>wc+z)
        {
            s=b*(wc+z)+w*(wc);
        }

        else
        {
            s=b*bc+w*wc;
        }
        cout<<s<<endl;

    }

}