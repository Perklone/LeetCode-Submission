class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int len = str.length();
        int start = 0;
        int end = len-1;
        while(start<end) {
            if(str[start] != str[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};