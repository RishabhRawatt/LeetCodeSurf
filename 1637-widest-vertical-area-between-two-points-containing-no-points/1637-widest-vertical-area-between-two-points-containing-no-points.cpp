class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int maxWidth = 0;
        sort(points.begin(), points.end());

        for (int i = 1; i < points.size(); i++)
        {
            maxWidth = max(maxWidth, points[i][0] - points[i - 1][0]);
        }

        return maxWidth;
    }
};