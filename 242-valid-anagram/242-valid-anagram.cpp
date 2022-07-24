class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) {
            return false;
        }
        int len = s.length();
        
        int ans1[27] = {0};
        int ans2[27] = {0};
        
        for(int i=0;i<len;i++) {
            ans1[(int)s[i]-97]++;
            ans2[(int)t[i]-97]++;
        }
        for(int i=0;i<27;i++){
         
            if(ans1[i] == ans2[i]) {
                continue;
            }
            else return false;
        }
        return true;
    }
};