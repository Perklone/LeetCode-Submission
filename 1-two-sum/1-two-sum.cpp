class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um;
        vector<int>vec;
        for(int i=0;i<nums.size();i++){
            int diff = target-nums[i];
            if(um.find(diff) != um.end()){
                vec.push_back(um[diff]);
                vec.push_back(i);
                return vec;
            }
            else {
                um[nums[i]] = i;
            }
        }
        return vec;
    }
};