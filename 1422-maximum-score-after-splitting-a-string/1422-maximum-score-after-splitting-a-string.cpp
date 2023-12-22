class Solution {
public:
    int maxScore(string s) {
        
        //brute force n*n
        int n =s.size();
        
        int maxsum=INT_MIN;
        
        for(int i=0;i<n-1;i++){
            
            int zero=0;
            int one=0;
            
            for(int j=0;j<i+1;j++){
                if(s[j]=='0') zero++;
            }
            for(int j=i+1;j<n;j++){
                if(s[j]=='1') one++;
            }
            
            maxsum=max(maxsum,zero+one);
        }
        return maxsum;
    }
};