class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        
        
        int time=0;
        
        for(int i=0;i<points.size()-1;i++){
            
            //get point values
            int x1=points[i][0];
            int y1=points[i][1];
            
            int x2=points[i+1][0];
            int y2=points[i+1][1];
            
            //find dx dy distance in abs
            
            int dx=abs(x1-x2);
            int dy=abs(y1-y2);
            
            //formula will be 
            
            time+=min(dx,dy)+abs(dx-dy);
            
        }
        return time;
        
    }
};