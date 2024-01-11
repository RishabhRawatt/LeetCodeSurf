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
        
        for(int i=0;i<n;i++){
            if(mp[temp[i]] > 0)
                ans.push_back(temp[i]);
            mp[temp[i]]--;
        }
        return ans;
    }
};