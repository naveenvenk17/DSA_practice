bool MyComp(vector<int> a,vector <int> b)
    {
        if(a[1]!=b[1])
           return (a[1]<b[1]);
        else 
        {  if(a[0]!=b[0])
            return (a[0]<b[0]);
           else 
               return a[0];
        }
    }
class Solution {
public:
    
    int maxEvents(vector<vector<int>>& events) {
        
        sort(events.begin(),events.end(),MyComp);
        
        unordered_map <int,int> m;
        
        int i,n=events.size();
        int a,b;
        // for(i=0;i<n;i++)
        // {
        //     cout<<events[i][0]<<" "<<events[i][1]<<endl;
        // }
        for(i=0;i<n;i++)
        {   a=events[i][0];
             b=events[i][1];
            while(a<=b)
            {
                if(m[a]==0)
                {  m[a]=1;
                    a=b+1;
                }
                else
                    a++;
            }
        }
        int count=0;
        for(auto i:m)
        {
            count++;
        }
        return count;
    }
};