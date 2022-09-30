class Solution {
public:
    
    static bool comp(const vector<int>&a,const vector<int>&b) {
        return a[1] < b[1];
    }
    
    int findMinArrowShots(vector<vector<int>>& points) {
        
        int len = points.size();
        sort(points.begin(),points.end(),comp);
        int res = 0;
        int prevEnd = points[0][1];
        res++;
        for(int i = 1; i < len; i++) {
            if(points[i][0]<=prevEnd) {
                
                continue;
            }
            else {
                res++;
                prevEnd = points[i][1];
            }
        }
        return res;
    }
};