class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int,int> freq;
        
        for(int i=0;i<nums.size();i++){
            
            if(freq.find(nums[i])==freq.end()){
                freq[nums[i]]=1;
            }
            else{
                freq[nums[i]]++;
            }
        }
        
        for(auto it : freq){
            if(it.second > nums.size()/2)
                return it.first;
        }
        return -1;
    }
};