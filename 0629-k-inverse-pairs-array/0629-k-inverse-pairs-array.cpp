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
        
        //O(n*k) -- T.c  -- optimised 
        //we need only prev n elements
        for(int i = 1; i <= n; i++) {
            long long cumSum = 1;
            for(int j = 1; j <= k; j++) {
                
                cumSum += dp[i-1][j];
                if(j >= i) {
                    cumSum -= dp[i-1][j-i];
                }
                dp[i][j] = cumSum % MOD;
            }
        }
        
        return dp[n][k];
        
    }
};