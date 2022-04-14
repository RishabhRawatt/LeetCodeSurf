class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> ans(n, vector<int> (n));        
        
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=n-1;
        
        int count=1;
        
        while(top<=bottom && left<=right){

            
            
            for(int i=left;i<=right;i++){
              ans[top][i]=count;
                count++;
            }
            top+=1;
            
            for(int i=top;i<=bottom;i++){
                ans[i][right]=count++;
            }
            right-=1;
            
            for(int i=right;i>=left;i--){
                ans[bottom][i]=count++;
            }
            bottom-=1;
            
            for(int i=bottom;i>=top;i--){
                ans[i][left]=count++;
            }
            left+=1;
            
        }
        return ans;
    }
};