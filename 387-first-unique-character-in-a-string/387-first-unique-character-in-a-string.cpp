class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int> freq;
        
        // by &c we gave the refrence of char so we can get index 
       for(char &c:s){
           freq[c]++;
       }
        
      for(int i=0;i<s.size();i++){
          if(freq[s[i]]==1)
              return i;
      }
        return -1;
    }
};