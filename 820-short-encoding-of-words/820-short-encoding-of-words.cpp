class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        
        unordered_set<string>set(words.begin(),words.end());
        
        for(auto x:set){
            
            for(int i=1;i<x.length();i++){
                set.erase(x.substr(i));
            }
        }
        
        int ans=0;
        for(auto x:set)
            ans+=x.length()+1;
        
        return ans;
    }
};