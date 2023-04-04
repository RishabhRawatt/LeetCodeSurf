class Solution {
public:
    int partitionString(string s) {
        
       unordered_set<char> temp;
        int res=1;
        
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            
            if(temp.find(ch)!=temp.end()){
                res++;
                temp.clear();
            }
            temp.insert(ch);
        }
        
        return res;
    }
};