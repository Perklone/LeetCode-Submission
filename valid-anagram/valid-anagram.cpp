class Solution {
public:
    bool isAnagram(string s, string t) {
        int x = s.length();
        int y = t.length();
        int arr[27];
        int arr2[27];
        if(x!=y) return false;
        memset(arr, 0, sizeof(arr));
        memset(arr2, 0, sizeof(arr2));
        for(int i=0;i<x;i++){
            arr[s[i] - 'a']++;
            arr2[t[i] - 'a']++;
        } 
        for(int i=0;i<26;i++){
            if(arr[i]!=arr2[i]){
                return false;
            }
        }
    return true;
        
    }
};