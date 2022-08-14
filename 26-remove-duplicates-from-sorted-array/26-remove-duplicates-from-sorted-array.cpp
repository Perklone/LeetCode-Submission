class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int temp = 1;
        int len = nums.size();
        
        for(int i=0;i<len;i++) {
            if(nums[i]!= nums[temp-1]) {
                nums[temp] = nums[i];
                temp++;
            }
        }
        return temp;
        
    }
};