class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int length = prices.size();
        int buy = 10001;
        int sell = 0;
        int res = 0;
        for(int i =0;i<length;i++){
            if(prices[i]<buy){
                buy = prices[i];
            }
            res = prices[i] - buy;
            
            if(res>sell){
                sell = res;
            }
        }
        return sell;
    }
};