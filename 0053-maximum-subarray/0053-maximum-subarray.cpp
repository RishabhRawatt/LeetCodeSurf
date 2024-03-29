class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxSum=nums[0];
        int currSum=0;
        
        for(int i=0;i<nums.size();i++){
            currSum > 0 ? currSum+=nums[i] : currSum=nums[i] ;
            maxSum=max(currSum,maxSum);
        }
        return maxSum;
    }
};