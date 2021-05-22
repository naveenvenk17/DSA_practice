class Solution {
public:
    int binary_search_to_find_index (vector<int>& nums,int l,int r,int key)
    { int m;
    while(r>=l)
      {
        m=(l+r)/2;
        if(nums[m]>key) r=m-1;
        else if(nums[m]<key) l=m+1;
        else if(nums[m]==key) return m;
        }
     
     return -1;
    }
    
    int binary_Search_to_find_pivot(vector<int>& nums,int l,int r)
    {int mid;
        while(l<=r)
        {   mid=(l+r)/2;
            
            if(mid<r and nums[mid]>nums[mid+1])
                return mid;
            if(mid>l and nums[mid]<nums[mid-1])
                return mid-1;
             
            if(nums[l]>=nums[mid])
                r=mid-1;
             
             else
                 l=mid+1;
            
        }
     return -1;
        
    }
    int search(vector<int>& nums, int target) {
        int k=-1;
        int n=nums.size();
        int p = binary_Search_to_find_pivot(nums,0,n-1);
        //cout<<p<<endl;
        
         if(p==-1)
         { k=binary_search_to_find_index(nums,0,n-1,target);
          // cout<<1<<k<<" ";
         }
         else if(nums[p]==target)
         {k=p;
         // cout<<2<<k<<" ";
         }
  
          else if (nums[0]<=target and nums[p]>target)
          {k=binary_search_to_find_index(nums,0,p-1,target);
             // cout<<3<<k<<" ";
          }
          else
          {k=binary_search_to_find_index(nums,p+1,n-1,target);
          //    cout<<4<<k<<" ";
          }
        return k;
               
        
    }
};