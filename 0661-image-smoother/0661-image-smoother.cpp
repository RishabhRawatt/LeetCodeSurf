class Solution {
public:
    
      vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
          
        int m=img.size(),n=img[0].size(),cnt,sum;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cnt=0;sum=0;
                for(int ii=-1;ii<2;ii++){
                    for(int jj=-1;jj<2;jj++){
                        
                        if((i+ii)>=0 && (j+jj)>=0 && (i+ii)<m && (j+jj)<n){
                            sum+=img[i+ii][j+jj] % 256;
                            cnt++;
                        }
                    }
                }
                img[i][j]=img[i][j] ^ (sum/cnt) << 8;
            }
        }
          
          for(int i=0;i<m;i++){
              for(int j=0;j<n;j++){
                    img[i][j]=img[i][j] >> 8;
              }
          }
        return img;
    }
};