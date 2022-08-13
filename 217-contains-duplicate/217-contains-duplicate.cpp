class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> um;
        int len = nums.size();
        for(int i=0;i<len;i++){
            if(um.find(nums[i]) == um.end()){
                um[nums[i]]++;
            }
            else{
                return true;
            }
        }
        return false;
    }
};