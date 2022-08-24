class Solution {
public:
    int characterReplacement(string s, int k) {
        int start = 0;
        int temp = 0;
        int res = 0;
        unordered_map<char,int> um;
        int len = s.length();
        for(int end = 0;end<len;end++) {
            um[s[end]-'A']++;
            temp = max(temp,um[s[end]-'A']);
            if(end-start+1-temp>k) {
                um[s[start]-'A']--;
                start++;
            }
            res = max(res,end-start+1);
        }
        return res;
    }
};