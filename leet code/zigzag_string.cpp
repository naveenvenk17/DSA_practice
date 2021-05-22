class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> v(min(numRows,int(s.size())));
        int n=s.length();
        int i=0,j;
        // for(i=0;i<n;i++)
        // {
        //     v[i]="";
        // }
        i=0;
        while(i<n)
        {
            j=0;
            while(j<numRows and i<n)
            {
                v[j]+=s[i];
                i++;j++;
            }
            j=numRows-2;
            while(j>0 and i<n)
            {
                v[j]+=s[i];
                i++;j--;
            }
            
        }
        
        string zigzag="";
        
        for(i=0;i<numRows;i++)
        {
            zigzag+=v[i];
        }
        return zigzag;
        return "0";
        
    }
};