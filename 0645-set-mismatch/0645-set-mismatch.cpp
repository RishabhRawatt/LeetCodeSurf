class Solution {
public:
    //unique approach 
    //nums[abs(nums[i]-1)]
    vector<int> findErrorNums(vector<int>& nums) {
        
        int n=nums.size();
        
        int dup=-1;
        int mis=-1;
        
        //for dup
        for(int i=0;i<n;i++){
            //means if element is -ve that element is dup
            if(nums[ abs( nums[i] ) -1 ] < 0 ){
                dup=abs(nums[i]);
            }else{
                //make -ve
                nums [abs (nums[i]) -1 ] *=(-1);
            }
        }
        
        // for miss
        for(int i=0;i<n;i++){
            if(nums[i] > 0) 
                mis=i+1;
        }
        
        return {dup,mis};
    }
};