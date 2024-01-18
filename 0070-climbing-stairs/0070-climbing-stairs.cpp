class Solution {
public:
    
    int dp[46]={0};
    
    int climbStairs(int n) {
        
        
        //base case
        if(n==0 || n==1) return 1;
        
        // dp
        if(dp[n]) return dp[n];
        
        return dp[n]=climbStairs(n-1)+climbStairs(n-2);
    }
};