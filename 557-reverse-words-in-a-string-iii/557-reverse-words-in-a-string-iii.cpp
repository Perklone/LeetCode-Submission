class Solution {
public:
    string reverseWords(string s) {
        int len = s.length();
        int start = 0;
        int end = 0;
        for(int i = 0;i<len;i++) {
            if(s[i]==' ') {
                end = i-1;
                while(start<end) {
                    swap(s[start],s[end]);
                    end--;
                    start++;
                }
                start = i+1;
            }
            else if(i == len-1) {
                end = i;
                while(start<end) {
                    swap(s[start],s[end]);
                    end--;
                    start++;
                }
            }
        }
        return s;
    }
};