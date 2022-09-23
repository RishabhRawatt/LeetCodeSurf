class Solution {
public:
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        //row cols
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