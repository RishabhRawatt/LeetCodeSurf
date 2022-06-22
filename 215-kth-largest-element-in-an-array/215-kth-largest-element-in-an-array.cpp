class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
     
         priority_queue<int,vector<int>,greater<int>> pq;
        
        for(int i=0;i<nums.size();i++){
            
            //check if if queue size is grater than k and queue top is smaller than array 
            // so just pop and  push greater number
           if(pq.size()>=k && pq.top()<nums[i]){
            pq.pop();
            pq.push(nums[i]);}
            
            // else the queue size is smaller then keep pushing
            else if(pq.size()<k){
                pq.push(nums[i]);
            }
        }
        return pq.top();
    }
};