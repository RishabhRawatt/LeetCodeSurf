class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        
        int n=nums.size();
        int ans=0;
        
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                
                bool flag=true;
                int last=-1;
                
                for(int k=0;k<n;k++){
                    
                    if(k >= i && k <= j ) continue;
                    
                    //non increasing
                    if(last >= nums[k]){
                        flag=false;
                        break;
                    }
                    //else
                    last=nums[k];
                }
                //so means we found 
                if(flag) ans++ ;
            }
        }
        return ans;
        
    }
};