class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int local_max,global_max;
        int i;
        
        local_max=nums[0];
        global_max=nums[0];
        
        for(i=1;i<nums.size();i++)
        {
            local_max=max(local_max+nums[i],nums[i]);
            global_max=max(global_max,local_max);
        }
        return global_max;
        
    }
};