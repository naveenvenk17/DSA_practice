lass Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product,prod0,n;
        product=accumulate(nums.begin(),nums.end(),1,multiplies<int>());
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {nums[i]=1;
             prod0=accumulate(nums.begin(),nums.end(),1,multiplies<int>());
             nums[i]=0;
            }
            
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
              nums[i]=product/nums[i];
            }
            else
            {
                nums[i]=prod0;
            }
        
            
        }
        
        return nums;
    }
};