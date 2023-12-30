class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int freq[26]={0};
        
        
        int n=words.size();
        
        for(int i=0;i<n;i++){
            string s=words[i];
            
            for(char &it :s)
                freq[it-'a']++;
        }
        
        //by stl and lambda function
        // [&] -- for accessing outside variables
        auto lambda =[&](int freq){
            return freq % n==0;
        };
        
        return all_of(begin(freq),end(freq),lambda);
        
        
    }
};