class Solution {
public:
    int countVowelStrings(int n) {
        
        // vector with 5 vowels ans initially store 1 in it
        vector<int> ans(5,1);
        
        //for 1 already filled with so start with 2
        for(int i=2;i<=n;i++){
        
            // form index 3 is second traverese from there
            for(int i=3;i>=0;i--){
                
                // ans at i is equal to prev+curr
                ans[i]+=ans[i+1];
            }
              
        }   
        // return now the result by sum all
            int ret=0;
            for(auto a:ans) ret+=a;
            return ret;
        
        
    }
};