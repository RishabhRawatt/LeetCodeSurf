class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int>freq;
        
        
        int n=words.size();
        
        for(int i=0;i<n;i++){
            string s=words[i];
            
            for(auto it :s)
                freq[it]++;
        }
        
        for (auto it:freq) {
        if (it.second % n != 0) {
            return false;
            break;
        }
    }
        
        return true;
        
        
    }
};