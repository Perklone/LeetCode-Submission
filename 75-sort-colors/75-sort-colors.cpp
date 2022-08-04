class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        vector<int> bucket(3,0);
        int index = 0;
        int temp = 0;
        for(int i=0;i<len;i++){
            if(nums[i] == 0){
                bucket[0]++;
            }
            else if(nums[i]==1){
                bucket[1]++;
            }
            else bucket[2]++;
        }
        while(index<len) {
            if(bucket[temp] == 0){
                temp++;
            }
            else {
                nums[index] = temp;
                bucket[temp]--;
                index++;
            }
        }
    }
};