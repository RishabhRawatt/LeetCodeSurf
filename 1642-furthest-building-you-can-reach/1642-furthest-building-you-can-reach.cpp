class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        
        
        //prorityqueue
        priority_queue<int> maxBricks;
        
        //position and difference
        int i=0;
        int diff=0;
        
        for(i=0;i<heights.size()-1;i++){
    
            diff=heights[i+1]-heights[i];
            
            //if building height is equal or less just continue
            if(diff <=0){
                continue;
            }
            
            bricks =bricks-diff;
            maxBricks.push(diff);
                
            //if brick become negative then just replace max brick use with ladder
            if(bricks < 0){
                    bricks +=maxBricks.top();
                    maxBricks.pop();
                    ladders--;
            }
            
            if(ladders < 0) break;
        }
        
        return i;
            
    }
};