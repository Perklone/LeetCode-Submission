class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> um;
        int len = nums.size();
        vector<int>res;
        
        for(int i = 0;i<len;i++){
            um[nums[i]]++;
        }
        for(int i = 1;i<=len;i++){
            if(um.find(i) == um.end()){
               res.emplace_back(i); 
            }
        }
        return res;
    }
};