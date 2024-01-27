class Solution {
public:
    //T.C --> O(n*k*n)
    //S.c -> O(n*k)
    
    //bottom up
    
    int MOD=1e9+7;
    
    int kInversePairs(int n, int k) {
        
        //dp[i][j]--> total ways of having (1 to i) and excact j inversions
        
        int dp[n+1][k+1];
        memset(dp,0,sizeof(dp));
        
     
        
        //same for k=0; put 1
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        
        for(int i=1;i<=n;i++){
            
            for(int j=1;j<=k;j++){
                
                //same memo logic
                for(int inv=0;inv<=min(j,i-1);inv++){
                    dp[i][j] = (dp[i][j]%MOD + dp[i-1][j-inv]%MOD) %MOD;
                }
            }
        }
        return dp[n][k];
        
    }
};