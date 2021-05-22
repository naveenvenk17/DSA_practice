class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
         vector<int> A;
    map<int,int> B;
    
    for(int j=0;j<nums.size();j++) 
    {   
        B[nums[j]]++;
        
    }
    
    sort(nums.begin(),nums.end(),[&](int a,int b){
       
        return B[a]!=B[b] ? B[a]<B[b] : a>b;
        /*
        This command sorts using custom comparator.
        first if the frequencies of First(a) and Second(b) are
        different then it sorts in the ascending order of the frequencies
        but if the freq of a and b are same then sorts in descending order 
        of the keys or the element in the nums.
        */
    });
    return nums;      
        
    }
};