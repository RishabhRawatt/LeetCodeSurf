class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int>freq;
        
        
        int n=words.size();
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<words[i].size();j++){
                freq[words[i][j]]++;
            }
        }
        
        for (const auto& pair : freq) {
        if (pair.second % n != 0) {
            return false;
            break;
        }
    }
        
        return true;
        
        
    }
};