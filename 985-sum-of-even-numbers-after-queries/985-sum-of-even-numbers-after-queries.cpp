class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int row = queries.size();
        
        int res = 0;
        vector<int> vec;
        unordered_map<int,int>um;
        for(int i = 0; i<nums.size();i++) {
            if(nums[i]%2 == 0) {
                res+=nums[i];
                um[i]++;
            }
        }
        
        for(int i = 0; i<row;i++) {
            int temp = queries[i][0];
            int x = queries[i][1];
            
            if((nums[x]+temp)%2 == 0 && um[x] == 0) {
                
                um[x]++;
                nums[x]+=temp;
                
                res+=nums[x];
            }
            else if ((nums[x]+temp)%2 == 0 && um[x] != 0) {
                nums[x]+=temp;
                res+=temp;
            }
            else if((nums[x]+temp)%2 != 0 && um[x]!= 0) {
                um[x]--;
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