#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int count,i,j,n,k,count=0;
        unordered_map <int,int> m;
        int s=arr.size();

        for(i=0;i<s;i++)
        {   
            unordered_map<int,int> ::iterator itr=m.find(2*arr[i]);
            if(itr!=m.end())
            { count++;
             
            }
             m[2*arr[i]]=arr[i];

        }

        if(count==1)
        return true;
        else
        return false;

        

        
    }
};