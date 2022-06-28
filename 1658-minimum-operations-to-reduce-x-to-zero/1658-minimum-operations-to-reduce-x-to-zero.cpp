class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int target = accumulate(begin(nums),end(nums),0) - x ;
    //when we pick elements from left and right summing to 'x' we will get remaining sum as (sum - x) 
        int s = 0 , e = 0  , maxLen = -1 , sum = 0 ;
        
        while(e < nums.size()){
            sum += nums[e] ;
            while(s <= e  and sum > target) sum -= nums[s++] ;
            if(sum == target) maxLen = max(maxLen,e-s+1) ;
            e++ ;
        }
        
        return maxLen == -1 ? -1 : (int)nums.size() - maxLen ;
        
    }
};