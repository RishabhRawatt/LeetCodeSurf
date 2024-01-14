class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
       vector<int>freq1(26);
       vector<int>freq2(26);
        
        if(word1.size() != word2.size()) return false;
        
        
        for(int i=0;i<word1.size();i++){
            freq1[word1[i]-'a']++;
            freq2[word2[i]-'a']++;
        }
        
        //check 1st option
        for(int i=0;i<26;i++){
            if(freq1[i] != 0 && freq2[i] !=0 ) continue;
            
            if(freq1[i] == 0 && freq2[i] ==0 ) continue;
            
            else return false;
        }
        
        //check 2nd
        sort(begin(freq1),end(freq1));
        sort(begin(freq2),end(freq2));

       return freq1 == freq2;
        
    }
};