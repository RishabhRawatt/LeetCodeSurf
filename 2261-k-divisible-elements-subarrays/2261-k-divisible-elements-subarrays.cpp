class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        
        unordered_set<string>st;
        
        //find all possiblities 
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            
            for(int j=i;j<n;j++){
                
                string temp; 
                int count=0;
                for(int k=i;k<=j;k++){
                    temp.push_back(nums[k]);
                    //check its divisible
                    if(nums[k] % p == 0) count++;
                    //if count exceed don't consider
                    }
                    if(count <= k)
                        st.insert(temp);
                
            }
        }
        return st.size();
        
    }
};