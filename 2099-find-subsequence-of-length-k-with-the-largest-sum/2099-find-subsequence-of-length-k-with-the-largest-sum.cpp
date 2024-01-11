class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        int n=nums.size();
        vector<int>temp=nums;
        vector<int>ans;
        
        unordered_map<int,int>mp;
        
        sort(rbegin(nums),rend(nums));
        for(int i=0;i<k;i++)
            mp[nums[i]]++;
        
        for(auto it:temp){
            if(mp[it]-- > 0)
                ans.push_back(it);
        }
        return ans;
    }
};