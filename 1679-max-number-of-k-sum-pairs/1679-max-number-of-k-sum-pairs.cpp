class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        int count=0;
        int n=nums.size();
        unordered_map<int,int> mp; // make ap map 
        
        for(int i=0;i<n;i++){
            
            if(mp[k-nums[i]] > 0){  // check if k - nums[i] present in map if yes then count++;
                
                count++; // increase count ans
                mp[k-nums[i]]--;   // and decrease then presented 
            }
            else // if not present then push nums[i] in map
                mp[nums[i]]++;
        }
        
        return count;
    }
};