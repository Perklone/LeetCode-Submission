class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v;
        int n = nums.size();
        int temp = 0;
        for(int i = 0;i<n;i++){
            temp+=nums[i];
            v.push_back(temp);
        }
        // for(int j = 0;j<n;j++){
        //     cout << v[j];
        // }
    return v;
    }
};