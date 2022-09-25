class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        // we have to move each element by kth step
        
        vector<int> temp(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            
            nums[(i+k)%nums.size()]=temp[i];
            
        }
        
        
    }
};