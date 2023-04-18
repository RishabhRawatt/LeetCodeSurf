class Solution {
public:
string mergeAlternately(string word1, string word2) {
string s;

    int k=min(word1.length(),word2.length());
    
    for(int i=0;i<k;i++){
        s.push_back(word1[i]);
        s.push_back(word2[i]);
    }
    
    if(k<word1.length()){
        for(int i=k;i<word1.length();i++){
            s.push_back(word1[i]);
        }
        
    }
    if(k<word2.length()){
        for(int i=k;i<word2.length();i++){
            s.push_back(word2[i]);
        }
    }
    return s;
    
}
};