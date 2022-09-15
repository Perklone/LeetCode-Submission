class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        unordered_map<int,int>um;
        if(changed.size() % 2 == 1) {
            return {};
        }
        vector<int>res;
        int len = changed.size();
        
        for(int i = 0;i<len;i++) {
            um[changed[i]]++;
        }
        sort(changed.begin(),changed.end());
        for(int i = 0; i<changed.size();i++) {
            
            if(um[changed[i]] == 0) continue;
            if(um[changed[i]*2]==0) {
             return {};   
            }
            res.push_back(changed[i]);
            um[changed[i]]--;
            um[changed[i]*2]--;
        }
        
        return res;
    }
};