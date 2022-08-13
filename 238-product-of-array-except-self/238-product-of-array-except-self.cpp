class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(),1);
        int len = nums.size();
        int temp = 1;
        
        for(int i = 0;i<len;i++) {
            output[i] = temp;
            temp*=nums[i];
        }
        int x = 1;
        for(int i = len-1; i>=0;i--) {
            output[i]*=x;
            x*=nums[i];
        }
        return output;
    }
};