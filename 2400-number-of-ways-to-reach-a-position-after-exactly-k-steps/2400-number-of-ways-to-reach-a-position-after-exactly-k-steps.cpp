class Solution {
public:
    int dp[4001][1001];
    int mod=1e9+7;
    
    int solve(int startPos, int endPos, int k){
        
        //base case
        if(k==0 && startPos == endPos) return 1;
        if(k==0) return 0;
        
        if(dp[startPos+1000][k] != -1) return dp[startPos+1000][k];
            
            int a=solve(startPos+1,endPos,k-1);
            int b=solve(startPos-1,endPos,k-1);
        
        return dp[startPos+1000][k]=(a+b)%mod;
    }
    
    int numberOfWays(int startPos, int endPos, int k) {
            memset(dp,-1,sizeof(dp));
        
        return solve(startPos,endPos,k);
    }
};