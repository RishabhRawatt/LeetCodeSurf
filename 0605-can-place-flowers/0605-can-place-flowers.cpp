class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int count=0;
        for(int i=0;i<flowerbed.size();i++){
            
            if(flowerbed[i]==0){
                   bool checkleft = (i == 0) ? true : (flowerbed[i - 1] == 0);
bool checkright = (i == flowerbed.size() - 1) ? true : (flowerbed[i + 1] == 0);

            
            
            if(checkleft && checkright){
                flowerbed[i]=1;
                count++;
            }
                }
        }
        
        return count>=n;
        
    }
};