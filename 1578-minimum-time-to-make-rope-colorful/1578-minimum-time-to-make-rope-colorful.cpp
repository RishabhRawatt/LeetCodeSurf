class Solution {
public:
    //two pinter
    int minCost(string colors, vector<int>& neededTime) {
        
        int result=0;
        
        int l=0;
        
        for(int r=1;r<colors.size();r++){
            
            if(colors[l] == colors[r]){
                
                if(neededTime[l] < neededTime[r]){
                    result+=neededTime[l];
                    l=r; // we didnt do ++ cause contain of holes [a,b,'',a ,c]
                }
                else
                    result+=neededTime[r];    
            }
            else
            {
                l=r;
            }
            
        }
        return result;
    }
};