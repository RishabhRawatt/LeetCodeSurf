class Solution {
public:
    //kind of subarray sum to k 
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                nums[i]=0;
            }
            else{
                nums[i]=1;
            }
        }
          unordered_map<int,int> cc;
        int ans=0;
        
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if(sum==k){
                ans=ans+1;
            }
            if(cc.find(sum-k)!=cc.end()){
                ans=ans+cc[sum-k];
            }
            cc[sum]++;
        }
        return ans;
        
    }
};