class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(auto it:words){
            
            string temp=it;
            reverse(temp.begin(),temp.end());
            if(temp==it) return it;
        }
        return "";
    }
};