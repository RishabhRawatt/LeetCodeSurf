class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
   
        map<int,int> freq;
        
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            
            if(freq.find(nums[i])==freq.end()){
                freq[nums[i]]=1;
            }
            else{
                freq[nums[i]]++;
            }
        }
        
        for(auto it : freq){
            if(it.second > nums.size()/3)
                
                ans.push_back(it.first);
                // return it.first;
        }
        return ans;
    }
};
