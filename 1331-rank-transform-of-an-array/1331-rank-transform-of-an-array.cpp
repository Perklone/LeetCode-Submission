class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int len = arr.size();
        vector<int> res;
        vector<int> arr2 = arr;
        sort(arr2.begin(),arr2.end());
        int temp = 0;
        int rank = 0;
        unordered_map<int,int>um;
        for(int i=0;i<len;i++ ){
            if(um.find(arr2[i]) == um.end()) {
                um[arr2[i]] = ++rank;
            }
        }
        for(int i = 0;i<len;i++){
            res.push_back(um[arr[i]]);
        }
        return res;
    }
};