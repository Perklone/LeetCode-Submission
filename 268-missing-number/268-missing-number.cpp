class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int temp = 0;
        int res = 0;
        for(int i = 0;i<len;i++) {
            temp = temp+i+1;
            res+=nums[i];
        }
        return temp - res;
    }
};