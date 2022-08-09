class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>um;
        
        for(int i=0;i<magazine.length();i++){
            if(um.find(magazine[i]) == um.end()) {
                um.insert(make_pair(magazine[i],1));
            }
            else {
                um[magazine[i]]++;
            }
        }
        for(int i=0;i<ransomNote.length();i++) {
            if(um[ransomNote[i]] <=0) {
                return false;
            }
            else{
                um[ransomNote[i]]--;
            }
        }
        return true;
    }
};