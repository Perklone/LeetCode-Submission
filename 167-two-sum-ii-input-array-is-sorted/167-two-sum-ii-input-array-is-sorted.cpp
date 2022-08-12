class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0;
        int end = numbers.size() -1;
        vector<int> vec;
        while(start<end) {
            if(numbers[start]+numbers[end]==target){
                vec.push_back(start+1);
                vec.push_back(end+1);
                return vec;
            }
            else if(numbers[start]+numbers[end]>target) {
                end-=1;
            }
            else {
                start+=1;
            }
        }
        return vec;
    }
};