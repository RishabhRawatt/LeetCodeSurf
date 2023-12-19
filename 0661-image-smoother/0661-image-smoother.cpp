class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        
        int n=img.size();
        int m=img[0].size();
        
        vector<vector<int>>direction{
            {-1,-1},{-1,0},{-1,1},
            {0,-1},{0,0},{0,1},
            {1,-1},{1,0},{1,1}
        };
        
        vector<vector<int>> result(n,vector<int>(m,0));
        
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                
                //find sum of neighbor
                int sum=0;
                int count=0;
                
                for(auto it:direction){
                    int x=i+it[0]; //get xcordinate
                    int y=j+it[1]; //get y
                    
                    //check valid
                    if(x >= 0 && x < n && y >= 0 && y < m){
                        sum+=img[x][y];
                        count++;
                    }
                    
                }
                //get avg
                result[i][j]=sum/count;
            }
        }
        return result;
    }
};