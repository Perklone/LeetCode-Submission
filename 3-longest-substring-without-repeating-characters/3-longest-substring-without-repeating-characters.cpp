class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        int start = 0;
        int res = 0;
        unordered_map<char,int>um;
        for(int end =0;end<len;end++) {
            if(um[s[end]] == 0) {
                um[s[end]]++;
            }
            else {
                
                while(um[s[end]]!=0) {
                    um[s[start]]--;
                    start++;
                }
                
                um[s[end]]++;
            }
            res = max(res,end-start+1);
        }
        return res;
    }
};