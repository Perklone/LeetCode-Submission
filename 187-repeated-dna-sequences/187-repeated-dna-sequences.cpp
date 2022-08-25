class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int start = 0;
        int len = s.length();
        unordered_map<string,int> um;
        vector<string>res;
        string temp;
        for(int end = 0;end<len;end++) {
            temp+=s[end];
            cout << temp.length() << endl;
            if(temp.length()==10) {
                if(um.find(temp)!=um.end()) {
                    if(find(res.begin(),res.end(),temp) != res.end()) {
                        continue;
                    }
                    res.push_back(temp);
                }
                else {
                    um[temp]++;
                }
                temp.erase(0,1);
            }
        }
        return res;
        
    }
};