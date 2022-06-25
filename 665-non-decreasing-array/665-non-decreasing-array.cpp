class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
    
        // so we can check that only 1 time allowed
        int count=0;
        
        for(int i=1;i<nums.size();i++){
            
            if(nums[i-1] > nums[i]){
                
                if(count == 1 ){
                    return false;
                }
                 count++;    
        // if i is less than 2 or i-2 element is less than i so replace i-1 with i
                if(i<2 || nums[i-2] <= nums[i])
                    nums[i-1] = nums[i];
            // else replace i with i-1
                else
                    nums[i]=nums[i-1];
            }
            
        }

        return true;
    }
};