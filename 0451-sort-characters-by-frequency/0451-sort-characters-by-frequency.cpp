class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>>hash('z'+1,{0,0});
        
        for(char c:s){
            hash[c]={hash[c].first+1 , c};
        }
        
        sort(hash.begin(),hash.end());
        
        string ans="";
        for(auto it:hash){
            //this string function do just create a string like
            //string (value,char)->(2,e)-> ee  
            //this save memeory and use optimized
           ans=string(it.first,it.second)+ans;
        }
        return ans;
    }
};