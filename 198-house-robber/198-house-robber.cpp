class Solution {
public:
    int rob(vector<int>& nums) {
        
        //by using tabulation with space optmized
        
        int curr=0;
        int prev=nums[0];
        int prev2=0;
        
        for(int i=0;i<nums.size();i++){
            
            int take=nums[i];
            if(i>1) take+=prev2;
            int nontake=0+prev;
            
            curr=max(take,nontake);
            
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
};