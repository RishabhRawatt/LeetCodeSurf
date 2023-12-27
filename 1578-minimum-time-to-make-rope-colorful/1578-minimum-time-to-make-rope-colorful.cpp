class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        int result=0;
        int left=neededTime[0];
        
        for(int i=1;i<colors.size();i++){
            
            if(colors[i] != colors[i-1]){
                left=0;
            }
            
            int right=neededTime[i];
            result+=min(left,right);
            left=max(left,right);
            
            
        }
        return result;
        
    }
};