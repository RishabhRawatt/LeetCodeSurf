class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int sum=0;
        int maxalt=0;
        
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            maxalt=max(maxalt,sum);

            
        }
        return maxalt;
        
        
    }
};