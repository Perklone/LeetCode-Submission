class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        
        int res = 0;
        int buy = 100001;
        int temp = 0;
        for(int end=0;end<len;end++) {
            buy = min(buy,prices[end]);
            temp = prices[end] - buy;
            res = max(temp,res);
        }
        return res;
    }
};