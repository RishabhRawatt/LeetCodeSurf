class Solution {
public:
    string reverseWords(string s) {
        
        int l=0,r=0;
        while(l < s.size()){
            
            while(r < s.size() && s[r]!=' '){
                    r++;
                
            }
            // reverse(s.begin()+l,s.begin()+r);
            int i=l,j=r-1;
            while(i<=j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            l=r+1;
            r=l;
        }
        return s;
        
    }
};