class Solution {
public:
    int fib(int n) {
        
        //tabulation with space optimized
        if(n==0 || n==1){
            return n;
        }
        int prev=1;
        int prev2=0;
        int current=0;
        for(int i=2;i<=n;i++){
            
            current=prev+prev2;
            prev2=prev;
            prev=current;
        }
        
        return prev;
    }
};