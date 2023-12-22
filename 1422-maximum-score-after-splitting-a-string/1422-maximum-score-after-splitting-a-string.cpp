class Solution {
public:
        
    //one pass approach 
    // we can se that
    // score = zeroLeft + oneRight  -------- eq (1)
    // OneTotal = OneLeft - OneRight
    // OneRight = OneTotal - OneLeft -------  eq (2) put this in eq 1
    // Score = zeroLeft + (OneTotal - OneLeft)
    // Score = zeroLeft - OneLeft + OneTotal (constant)  
    
    int maxScore(string s) {
        
        int n=s.size();
        
        int maxScore=INT_MIN;
        
        int one=0,zero=0;
        
        for(int i=0;i<n-1;i++){
            
            if(s[i]=='1') one++;
            else zero++;
            
            // find score we will (add constant total one at end)
            maxScore=max(maxScore, zero - one);
        }
        
        // we missed one place at s[n-1]  check is it one or zero
        if(s[n-1]=='1') one++;
        
        return maxScore+one;
        
    }
};