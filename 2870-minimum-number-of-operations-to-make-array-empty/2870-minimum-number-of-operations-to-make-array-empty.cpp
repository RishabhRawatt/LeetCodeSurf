class Solution {
public:
    int minOperations(vector<int>& nums) {
      //op 1 -- 2 sam
    // op 2 -- 3 same 
        
        unordered_map<int, int> freq;
        for(auto i: nums) freq[i]++;
        
        int ans=0;
        
        for(auto it:freq){
            if(it.second ==1) return -1;
            if(it.second % 3==0) ans+= it.second/3;
            else ans+=it.second/3+1;
        }
        
        return ans;
        
        
        
    }
};