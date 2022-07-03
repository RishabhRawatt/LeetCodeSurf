class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        
        //peek and valley approach 
        
        int n=nums.size();
        
        int peek=1;
        int valley=1;
        
        for(int i=1;i<n;i++){
            
            if(nums[i]>nums[i-1])
                peek=valley+1;
            else if(nums[i]< nums[i-1])
                valley=peek+1;
        }
        
        return max(peek,valley);
    }
};