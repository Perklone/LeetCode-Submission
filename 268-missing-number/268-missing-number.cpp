class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int temp = 0;
        unordered_map<int,int> um;
        int len = nums.size();
        int highest = -1;
        for(int i = 0; i < len; i++) {
            um[nums[i]]++;
            if(nums[i]>highest) {
                highest = nums[i];
            }
        }
        for(int i = 0;i<=len;i++){
            if(um.find(i) == um.end()) {
                return i;
            }
        }
        return highest;
    }
};