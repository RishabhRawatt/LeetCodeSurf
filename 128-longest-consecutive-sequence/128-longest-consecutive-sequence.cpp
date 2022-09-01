class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     
        unordered_set<int> hashset;
        int ans=0;
        
        for(auto it:nums)
            hashset.insert(it);
        
        for(auto it:nums){
            
            if(!hashset.count(it-1)){
                int currele=it;
                int currcount=1;
                
                while(hashset.count(currele+1)){
                    currele++;
                    currcount++;
                }
                ans=max(ans,currcount);   
            }
        }
        return ans;
    }
};