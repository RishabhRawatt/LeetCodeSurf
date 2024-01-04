class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        
        unordered_set<string>st;
        
        //find all possiblities 
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            string temp; 
            int count=0;
            for(int j=i;j>=0;j--){
                temp.push_back(nums[j]);
                    //check its divisible
                    if(nums[j] % p == 0) count++;
                    //if count exceed don't consider
                    
                     if(count <= k)
                        st.insert(temp);
                else break;
            }
            }
        
        return st.size();
        
    }
};