class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int row = queries.size();
        
        int res = 0;
        vector<int> vec;
        
        for(int i = 0; i<nums.size();i++) {
            if(nums[i]%2 == 0) {
                res+=nums[i];
            }
        }
        
        for(int i = 0; i<row;i++) {
            int temp = queries[i][0];
            int x = queries[i][1];
            
            if((nums[x]+temp)%2 == 0 && nums[x]%2 != 0) {
                nums[x]+=temp;
                
                res+=nums[x];
            }
            else if ((nums[x]+temp)%2 == 0 && nums[x]%2 == 0) {
                nums[x]+=temp;
                res+=temp;
            }
            else if((nums[x]+temp)%2 != 0 && nums[x]%2 == 0) {
                res-=nums[x];
                nums[x]+=temp;
                
            }
            else {
                nums[x]+=temp;
            }
            vec.push_back(res);
        }
        return vec;
    }
};