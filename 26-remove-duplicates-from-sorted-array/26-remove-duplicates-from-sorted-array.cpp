class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int temp = -101;
        int res = 0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] != temp) {
                temp = nums[i];
                continue;
            }
            else {
                nums.erase(nums.begin()+i);
                i--;
                res++;
            }
        }
        return nums.size();
    }
};