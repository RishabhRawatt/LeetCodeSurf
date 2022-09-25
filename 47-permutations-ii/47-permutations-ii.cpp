class Solution {
public:
    
    void recur(int index,vector<int> &nums, set<vector<int>>&ans){
        
        if(index==nums.size()){
            ans.insert(nums);
            
            return;
        }
        
        for(int i=index;i<nums.size();i++){
            
            swap(nums[index],nums[i]);
            recur(index+1,nums,ans);
            swap(nums[index],nums[i]);
        }
        
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
    
        set<vector<int>> ans;
        
        recur(0,nums,ans);
        
        vector<vector<int>>result(ans.begin(),ans.end());
        return result;
        
    }
};