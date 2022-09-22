class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um;
        
        for(int i = 0;i<nums.size();i++) {
            int temp = target-nums[i];
            if(um.find(temp)!=um.end()) {
                return {um[temp],i};
            }
            um[nums[i]] = i;
        }
        return {};
    }
};