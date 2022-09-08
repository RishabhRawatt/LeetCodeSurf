class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int>mpp(256,-1);
        
        int left=0;
        int right=0;
        int length=0;
        
        while(right < s.length()) { 
            
            if(mpp[s[right]] != -1)
                //if index is less than left no need to move left
                left=max(left,mpp[s[right]]+1);
            
            mpp[s[right]]=right;
            length=max(length,right-left+1);
            right++;
        }
        return length;
    }
};