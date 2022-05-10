class Solution {
public:
    
    vector<vector<int>> ans2;
    vector<int> ans;
    
    void helper(int index, int sum,int n ,int k){
        
        //base case when sum become n and all elements k slot fill
    if(sum ==n && k==0){
        
        ans2.push_back(ans);
        return;
    }    
    
        if(sum > n){
            return;
        }
        //we using index so we cant repeat same number twice so index must increase
        for(int i=index;i<=9;i++){
            if(i>n)
                break;
            ans.push_back(i);
            helper(i+1,sum+i,n,k-1);
            ans.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
        int sum=0;
        helper(1,sum,n,k);
            
            return ans2;
    }
};