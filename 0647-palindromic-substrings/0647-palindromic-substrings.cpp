class Solution {
public:
    int countSubstrings(string s) {
        
        
        int left,right;
        int result=0;
       
        for(int i=0;i<s.size();i++)
        {
            
            //for odd
            left =i;
            right=i;
            
            while(left >= 0  && right < s.size() && s[left]==s[right]){
                //increse result
                result++;
                //expand the substring
                left--;
                right++;
            }
            
            //for even 
            left=i;
            right=i+1;
            while(left >=0 && right < s.size()  && s[left]==s[right]){
                result++;
                left--;
                right++;
            }
                
        }
        return result;
            
    }
};