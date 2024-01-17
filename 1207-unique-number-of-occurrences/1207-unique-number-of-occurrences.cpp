class Solution {
public:
    
    //approach is that if numbers ( different) and there count same that means unique
    //eg [1,2,2,1,1,3] 
    // elements are 1,2,3 ----> 3 elements
    // there freqnency are  1-->3 , 2-->2, 3-->1  which is also 3 (3 different frequency)
    bool uniqueOccurrences(vector<int>& arr) {
        // first store frequency
        unordered_map<int,int>freq;
        
        for(auto it :arr){
            freq[it]++;
        }
        
        //set to get different frequency of elements
        // if any of element have same frequency set will ignore it 
        //which cause not equal size 
        set<int>st;
        
        for(auto [num,count] :freq){
            st.insert(count);
            
        }
        return st.size()== freq.size();
    }
};