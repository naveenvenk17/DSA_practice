#include <bits/stdc++.h>
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i,j,k;
        int n=nums.size();
        for(i=0;i<n;i++){
            while(nums[i]>0 and nums[i]<n and nums[i]!=i+1 and nums[i]!=nums[nums[i]-1])
            { 
                swap(nums[i],nums[nums[i]-1]);
             
            }
        }
         for(i=0;i<n;i++)cout<<nums[i]<<" "<<endl;
        for(i=0;i<n;i++){
            
                if(nums[i]!=i+1)break;
            
        }
        
    return i+1;
    }
};