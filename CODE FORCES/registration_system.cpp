#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n,e,count;
    string str;
    cin>>n;
    unordered_map <string, int> m;
    for(i=0;i<n;i++)
    {   
        cin>>str;
        if(m.find(str)==m.end())
        {
            m[str]=0;
            cout<<"OK"<<endl;
        }
        else
        {
            m[str]+=1;
            unordered_map<string, int>:: iterator itr=m.find(str);
            cout<<itr->first<<itr->second<<endl;

        }


    }

    
}