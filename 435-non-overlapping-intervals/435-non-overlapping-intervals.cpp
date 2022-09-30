class Solution {
public:
    
    static bool comp(const vector<int>&a,const vector<int>&b) {
        return a[0] < b[0];
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size() == 0) { return 0; }
        
        int len = intervals.size();
        sort(intervals.begin(),intervals.end(),comp);     
        int lastEnd = intervals[0][1];
        int res = 0;
        for(int i = 1; i< len; i++) {
            if(intervals[i][0] >= lastEnd) {
                lastEnd = intervals[i][1];
            } else {
                res++;
                lastEnd = min(lastEnd,intervals[i][1]);
            }
        }
        return res;
    }
};