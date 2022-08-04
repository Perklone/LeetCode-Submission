class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = 1000001;
        int ans = 0;
        int len = nums.size();
        int start = 0;
        bool track =false;
        for(int end = 0;end<len;end++){
            ans+=nums[end];
            while(ans>=target) {
                track = true;
                int temp = end-start+1;
                res = min(res,temp);
                ans-=nums[start];
                start++;
            }
        }
        if(!track) {
            return 0;
        }
        return res;
    }
};