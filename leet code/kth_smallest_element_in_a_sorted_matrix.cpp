class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
       int i,j;
        int n=matrix.size();
        if(n==1)return matrix[0][0];
        
        vector <int> v;
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                v.push_back(matrix[i][j]);
        }
        
        sort(v.begin(),v.end());
        return v[k-1];
    }
};