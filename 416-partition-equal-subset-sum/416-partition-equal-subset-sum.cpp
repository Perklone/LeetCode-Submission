class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        int len = nums.size();
        int sum = 0;
        for(int i = 0;i < len;i++) {
            sum+=nums[i];
        }
        if(sum%2 != 0) {
            return false;
        }
        vector<vector<int>> vec(nums.size(),(vector<int>(sum/2+1,-1)));
        return partition(nums,sum/2,0,vec);
    }
    bool partition(vector<int>&nums, int sum, int index,vector<vector<int>>&dp) {
        if(sum == 0) {
            return true;
        }
        if(nums.size() == 0 || index>=nums.size()) {
            return false;
        }
        if(dp[index][sum] == -1) {
          if(nums[index] <= sum) {
            if(partition(nums,sum-nums[index],index + 1,dp)) {
                    dp[index][sum] = 1;
                    return true;
                }
            }
            dp[index][sum] = partition(nums,sum,index+1,dp) ? 1 : 0;
        }
        
        
        return dp[index][sum] == 1 ? true: false;
    }
    
    
};