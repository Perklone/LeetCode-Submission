class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>um;
        int len = s2.length();
        for(int i = 0;i<s1.length();i++) {
            um[s1[i]]++;
        }
        int start = 0;
        int res = 0;        
        for(int end = 0;end<len;end++) {
            if(um.find(s2[end])!=um.end()) {
                um[s2[end]]--;
                if(um[s2[end]] == 0) {
                    res++;
                }
            }
            if(res == (int)um.size()) {
                return true;
            }
            if(end>=s1.length() - 1) {
                if(um.find(s2[start])!= um.end()) {
                    if(um[s2[start]] == 0) {
                        res--;
                    }
                    um[s2[start]]++;
                }
                start++;
            }
        }
        return false;
    }
};