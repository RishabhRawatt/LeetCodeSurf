class Solution {
public:
    
    //T.C  O(k^n) --- recursion
    //T.C  O(n*k*(n-1)) ---- memeoization
    
    int MOD=1e9+7;
    int dp[1001][1001];
    //recursive
    
    int solve(int n,int k){
        
        int ans=0;
        
        //base case
        if(n==0) return 0;
        if(k==0) return 1; //sorted array have 0 inversions
        
        //dp
        if(dp[n][k] != -1) return dp[n][k];
        
        // min(k,n-1) because max inversion possible is
        //n-1 so k must me less than or equal to that
        for(int inv=0;inv<=min(k,n-1);inv++){
            
            //we have inv inversions need k-inv more
            ans=( ans%MOD +solve(n-1,k-inv)%MOD )%MOD;
        }
        return dp[n][k]=ans;
    }
    int kInversePairs(int n, int k) {
        
        memset(dp,-1,sizeof(dp));
        return solve(n,k);
    }
};