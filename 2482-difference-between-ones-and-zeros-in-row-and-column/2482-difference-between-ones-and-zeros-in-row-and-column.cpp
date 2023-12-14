class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        // calculate row and col ones
        
        int one_row[n];
        int one_col[m];
        
        memset(one_row,0,sizeof(one_row));
        memset(one_col,0,sizeof(one_col));
        
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    one_row[i]++;
                    one_col[j]++;
                }
            }
        }
        
        vector<vector<int>>diff(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                int zero_row=n-one_row[i];
                int zero_col=m-one_col[j];
                
                diff[i][j]=one_row[i] + one_col[j] - zero_row -zero_col;
            }
        }
        return diff;

    }
};