class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res = 0;
        int len = nums.size();
        for(int i = 0;i < len;i++) {
            for(int j = 0;j<len;j++) {
                if(nums[i] == nums[j] && i < j) {
                    res++;
                }
            }
        }
        return res;
    }
};