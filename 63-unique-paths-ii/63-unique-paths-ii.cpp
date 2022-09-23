class Solution {
public:
    
//     int helper(int i,int j,vector<vector<int>>&obstacleGrid,vector<vector<int>> &dp){
        
//         //basecase
//         if(i>=0 && j>=0 && obstacleGrid[i][j]==1)
//             return 0;
//         if(i==0 && j==0)
//             return 1;
//         if(i<0 || j<0)
//             return 0;
//         if(dp[i][j]!= -1)
//             return dp[i][j];
//         int up=helper(i-1,j,obstacleGrid,dp);
//         int left=helper(i,j-1,obstacleGrid,dp);
        
//         return dp[i][j]=up+left;
        
//     }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();

        
        //row
        vector<int> pdp(n,0);
        
        for(int i=0;i<m;i++){
            
            vector<int>cdp(n,0);
            
            for(int j=0;j<n;j++){
                
                if(obstacleGrid[i][j]==1){
                    cdp[j]=0;
                    continue;
                }
                
                if(i==0 && j==0){
                    cdp[j]=1;
                    continue;
                }
                else{
                    int up=0;
                    int left=0;
                    if(i>0) up=pdp[j];
                    if(j>0) left=cdp[j-1];
                    
                    cdp[j]=up+left;
                }
            }
            pdp=cdp;
        }
        return pdp[n-1];
    }
};