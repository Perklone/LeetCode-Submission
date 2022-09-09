class Solution {
public:
    static bool sortcol(const vector<int>& a, const vector<int>& b)
    {
        if(a[0] == b[0]){
            return a[1] > b[1];
        }
        return a[0] < b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        ios_base::sync_with_stdio(false);
        int len = properties.size();
        int res = 0;
        sort(properties.begin(),properties.end(),sortcol);
        int min = -1;
        for(int i = len-1; i>=0;i--) {
            if(properties[i][1] < min) {
                res++;
            }
            min = max(properties[i][1],min);
        }
        

        return res;
    }
};