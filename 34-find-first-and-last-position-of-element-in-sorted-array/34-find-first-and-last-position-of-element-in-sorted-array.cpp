class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int mid = 0;
        vector<int> res = {-1,-1};
        if(nums.size() == 0){
            return res;
        }
        res[0] = searchStart(nums,target);
        res[1] = searchEnd(nums,target);
        
        return res;
    }
    
    int searchStart(vector<int>&nums, int target) {
        int res = -1;
        int start = 0;
        int end = nums.size()-1;
        
        while(start<=end) {
            int mid = start + (end-start)/2;
            if(nums[mid]>=target) {
                end = mid-1;
            }else {
                start = mid+1;
            }
            if(nums[mid]==target) {
                res = mid;
            }
        }
        return res;
    }
    int searchEnd(vector<int>&nums,int target) {
        int res = -1;
        int start = 0;
        int end = nums.size()-1;
        
        while(start<=end) {
            int mid = start + (end-start)/2;
            if(nums[mid]<=target) {
                start = mid+1;        
            }else {
                end = mid-1;
            }
            if(nums[mid]==target) {
                res = mid;
            }
        }
        return res;
    }
};