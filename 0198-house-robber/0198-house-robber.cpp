class Solution {
public:

    // int helper(int i,vector<int> & nums,vector<int>&dp){

    //     //base case
    //     if(i==0) return nums[i];
    //     if(i<0) return 0;

    //     if(dp[i]!=-1)
    //         return dp[i];
    //     //if picked then skip it next
    //     int pick=nums[i]+helper(i-2,nums,dp);
    //     int notpicked=helper(i-1,nums,dp);

    //     return dp[i]=max(pick,notpicked);
    // }

    int rob(vector<int>& nums) {
        int n=nums.size();
        // vector<int> dp(n,-1);

        // dp[0]=nums[0];
        int curr=0;
        int one=nums[0];
        int two=INT_MIN;

        for(int i=1;i<n;i++){
            int take=nums[i];
            if(i>1) take+=two;
            int notake=0+one;

            curr=max(take,notake);
            two=one;
            one=curr;
        }
        // return helper(n-1,nums,dp);
        return one;
    }
};