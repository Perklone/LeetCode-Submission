class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start = 0;
        int len = nums.size();
        int end = len-1;
        int index = len-1;
        vector<int> vec(len);
        
        for(int i=0;i<len;i++) {
            int a = nums[start] * nums[start];
            int b = nums[end] * nums[end];
            
            if(a<b) {
                vec[index] = b;
                index--;
                end--;
            }
            else {
                vec[index] = a;
                index--;
                start++;
            }
        }
        return vec;
        
    }
};