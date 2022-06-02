class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        // find size
        int m=matrix.size();
        int n=matrix[0].size();
        
        //create temp matrix
        vector<vector<int>>tp(n,vector<int>(m,0));
        
        //now just swap or put row val to columns
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                tp[j][i]=matrix[i][j];
            }
        }
        return tp;
    }
};