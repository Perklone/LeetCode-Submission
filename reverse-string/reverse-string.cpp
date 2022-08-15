class Solution {
public:
    void reverseString(vector<char>& s,int index = 0) {
        if(index<s.size()/2) {
            swap(s[index],s[s.size()-index-1]);
            reverseString(s,index+1);
        }
        
    }
};