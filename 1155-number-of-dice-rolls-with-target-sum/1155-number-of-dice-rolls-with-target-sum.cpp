class Solution {
public:
    
    int MOD=1e9+7;
    
    //memoization
    int t[31][1001];

    int solve(int n,int k,int target){
        //base case
        if(target < 0) return 0;
        
        //memo
        
        if(t[n][target] != -1 ) return t[n][target];
        
        if(n == 0 ){
            return target==0; //if we rolled all dices and target satisfy
        }
        int ways=0;
        // total possiblities k--faces 
        for(int i=1;i<=k;i++){
            ways=(ways+solve(n-1,k,target-i))%MOD;
        }
        return t[n][target]=ways;
         
    }
    
    int numRollsToTarget(int n, int k, int target) {
        memset(t,-1,sizeof(t));
        return solve(n,k,target);    
    }
};