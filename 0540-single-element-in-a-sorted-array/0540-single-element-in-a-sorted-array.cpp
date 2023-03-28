class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        //naive appraoach just xor all
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans^=nums[i];
        }
        return ans;
        
    }
};