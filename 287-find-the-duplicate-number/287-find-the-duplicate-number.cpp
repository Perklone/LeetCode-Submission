class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int start = nums.size();
        unordered_map<int,int> um;
        
        for(int i=0;i<start;i++) {
            if(um.find(nums[i]) != um.end()) {
                return nums[i];
            }
            else {
                um[nums[i]]++;
            }
        }
        return start;
    }
};