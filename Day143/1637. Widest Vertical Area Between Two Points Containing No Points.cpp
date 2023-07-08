class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int mx = 0;
        for(int i=0;i<points.size()-1;i++){
            int t = abs(points[i][0]-points[i+1][0]);
            mx = max(mx,t); 
        }
        return mx;
    }
};