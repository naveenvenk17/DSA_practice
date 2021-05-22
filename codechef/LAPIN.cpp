#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,e,a;

    cin>>n;
    string s;

    for(i=0;i<n;i++)
    {
        cin>>s;

        a=s.size() -1;
        int j=0;

        while(a>1)
        {
            if(s[j++] != s[a--])
            {cout<<"NO"<<endl;
             return;
             }



        }

    cout<<"YES"<<endl;        

        

    
    }

}