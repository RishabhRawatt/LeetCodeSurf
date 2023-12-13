class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        
        //row and col size
        int n=mat.size();
        int m=mat[0].size();
        
        int row[n];
        int col[m];
        memset(row, 0, sizeof(row));
        memset(col, 0, sizeof(col));
      
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(mat[i][j]==1){
                    
                    row[i]++;
                    col[j]++;
                }
                
            }
        }
        
        
        int special=0;
        //now check for 1
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(mat[i][j]==1 && row[i]==1 && col[j]==1){
                    special++;
                }
            }
        }
        return special;
    }
};