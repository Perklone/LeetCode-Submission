class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[27] = {0};
        
        for(int i=0;i<magazine.length();i++){
            arr[magazine[i]-97]++;
        }
        for(int i=0;i<ransomNote.length();i++){
            int chara = ransomNote[i] - 97;
            if(arr[chara] <= 0) {
                return false;
            }
            else {
                arr[chara]--;
            }
        }
        return true;
    }
};