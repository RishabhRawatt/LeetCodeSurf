class Solution {
public:
    
        
    void backtrack(vector<int> nums, int idx,vector<vector<int>> &res ){
        if(idx == nums.size()){
            res.push_back(nums);
        }
        for(int j = idx; j < nums.size(); j++){
            if(idx == j || nums[idx] != nums[j]){
                swap(nums[idx], nums[j]);
                backtrack(nums, idx+1, res);
            }
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        backtrack(nums, 0, res);
        return res;
    }
};
