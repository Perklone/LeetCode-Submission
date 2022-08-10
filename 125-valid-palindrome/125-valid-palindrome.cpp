class Solution {
public:
    bool isPalindrome(string s) {
        
        int length = s.length();
        for (int i = 0; i < length; i++){
            s[i] = tolower(s[i]);
        if (s[i] == ' ' || s[i] >=58 && s[i]<=64 || s[i]=='@' || s[i]<48 || s[i] >=91 && s[i]<=96 || s[i]>=123 && s[i]<=126) {
            //using in-built function to erase element
            s.erase(s.begin() + i);
            i--;
        }
        length = s.length();
    }
    length = s.length();
    int left = 0;
    int right = s.length()-1;
    if (length == 2){
        if (s[left] != s[right]){
            return false;
        }
    }
    for(int i=0;i<length;i++){
        if(left==right){
            if(s[left]==s[right]){
                return true;
            }
        }
        while(left<right){
            if(s[left]!= s[right]){
                return false;
            }
            left++;
            right--;
        }
    }
    return true;
 }
};
             