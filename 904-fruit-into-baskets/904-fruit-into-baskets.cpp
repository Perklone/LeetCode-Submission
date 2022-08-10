class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int len = fruits.size();
        int start = 0;
        int ans = 0;
        int temp = 0;
        unordered_map<int,int> um;
        for(int end=0;end<len;end++) {
            if(um[fruits[end]] == 0) {
                um[fruits[end]]++;
                temp++;
            }
            else {
                um[fruits[end]]++;
            }
            if(temp>2) {
                um[fruits[start]]--;
                if(um[fruits[start]] == 0) {
                    temp--;
                }
                start++;
            }
            ans = max(ans,end-start+1);
        }
        return ans;
    }
};