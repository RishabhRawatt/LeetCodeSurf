class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        int ans=0;
        
        unordered_map<char,int>mp;
        for(char x:chars){
            mp[x]++;
        }
        
        for(int i=0;i<words.size();i++){
            
            unordered_map<char,int>temp=mp;
            
            string st=words[i];
            int j=0;
            for(j=0;j<st.size();j++){
                if(temp[st[j]]){
                    temp[st[j]]--;
                }else{
                    break;
                }
            }
            if(j==st.size()) {
            ans+=st.size();
            }
            
        }
        return ans;
    }
};