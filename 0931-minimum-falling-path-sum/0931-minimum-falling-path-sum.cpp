class Solution {
public:

    int helper(int i,int j,vector<vector<int>>&matrix,vector<vector<int>> &dp){

        if(j<0 || j>=matrix[0].size()) return 1e9;
        if(i==0) return matrix[0][j];

        if(dp[i][j]!=-100000) return dp[i][j];
        int str=matrix[i][j] + helper(i-1,j,matrix,dp);
        int left=matrix[i][j] + helper(i-1,j-1,matrix,dp);
        int right=matrix[i][j] + helper(i-1,j+1,matrix,dp);

        return dp[i][j]=min(str,min(left,right));

    }

    int minFallingPathSum(vector<vector<int>>& matrix) {

        int n=matrix.size();
        int m=matrix[0].size();

        vector<vector<int>>dp(n,vector<int>(m,-100000));
        int mini=1e9;
        for(int j=0;j<m;j++){
            mini=min(mini,helper(n-1,j,matrix,dp));
        }
        // return helper(n,m,matrix);    
        return mini;

    }
};