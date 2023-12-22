class Solution {
public:
    
    //two pass approch 
    //O(N+N)
    
    int maxScore(string s) {
        
        int n=s.size();
        
        //find all one 
        int totalOne=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') totalOne++;
        }
        
        int maxsum=INT_MIN;
        
        int zero=0;
        int one=0;
        
        for(int i=0;i<n-1;i++){
            if(s[i]=='1') 
                one++;
            else
                zero++;
            
            int right_one=totalOne-one;
            maxsum=max(maxsum,zero+right_one);
                
        }
        return maxsum;
    }
};