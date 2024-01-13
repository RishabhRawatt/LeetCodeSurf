class Solution {
public:
    //same as longest common sub array
    
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size();
        int m=nums2.size();
       int dp[n+1][m+1];
        memset(dp,0 ,sizeof(dp));
        
        int maxx=0;
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(nums1[i-1]==nums2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                    maxx=max(maxx,dp[i][j]);
                }
            }
            
        }
        return maxx;
    }
};