class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int start = 0;
        int res = 0;
        int buy = 100001;
        int temp = 0;
        for(int end=0;end<len;end++) {
            buy = min(buy,prices[start]);
            temp = prices[end] - buy;
            res = max(temp,res);
            start++;
        }
        return res;
    }
};