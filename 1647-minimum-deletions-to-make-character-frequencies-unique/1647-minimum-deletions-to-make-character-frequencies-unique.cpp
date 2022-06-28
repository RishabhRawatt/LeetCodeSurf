class Solution {
public:
    int minDeletions(string s) {
        
        vector<int>freq(26,0);
        
        int count=0;
        int n=s.size();
        
        for (char c : s){
            freq[c - 'a']++;
        }
        
        sort(freq.begin(),freq.end(),greater<int>());
        
        int maxf=freq[0];
        
        for(int i=0;i<26;i++){
            
            if(maxf < freq[i])
            {
                if(maxf > 0)
                    count+=(freq[i]- maxf);
                    
                else
                    count+=freq[i];
            }
            maxf=min(maxf-1,freq[i]-1);
            
        }
                return count;
    }
};