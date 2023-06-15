class Solution {
public:
    
   bool isPossible(vector<int>&position , int n, int m, int minDist){
        int cnt=1;
       
       int lastPlaced=position[0];
       for(int i=1;i<n;i++){
        if(position[i]-lastPlaced>=minDist){
        cnt++;
            lastPlaced=position[i];
            }
       }
       if(cnt>=m)return true;
       return false;
   
   }
        
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        
        int low=1;
        int high=position[position.size()-1]-position[0];
        
        while(low <=high){
             int mid = (low + high) >> 1;

        if (isPossible(position, position.size(), m, mid)) {
          low = mid + 1;
        } else {
          high = mid - 1;
        }
        }
        return high;
    }
};