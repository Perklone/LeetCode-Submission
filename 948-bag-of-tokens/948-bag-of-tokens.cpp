class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int l = 0;
        int r = tokens.size()-1;
        int res = 0;
        while(l<=r) {
            if(power>=tokens[l]) {
                power-=tokens[l];
                res++;
                l++;
            }
            else if(res > 0 && l != r) {
                power+=tokens[r];
                res--;
                r--;
            }
            else{
                break;
            }
        }
        return res;
        
    }
};