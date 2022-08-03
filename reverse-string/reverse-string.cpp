class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size() -1;
        char temp;
        while(start<end) {
            temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
        for(int i=0;i<s.size();i++){
            cout << s[i];
        }
    }
};