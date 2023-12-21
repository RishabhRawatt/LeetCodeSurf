class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        
        int n=points.size();
        
        sort(points.begin(),points.end());
        
        int maxx=INT_MIN;
        for(int it=0;it<points.size()-1;it++){
            maxx=max(maxx,points[it+1][0]-points[it][0]);
        }
        
        return maxx;
    }
};