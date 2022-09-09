class Solution {
public:
    vector<int>vec = vector<int>(46,0);
    int climbStairs(int n) {
        if(n<=3) {
            return n;
        }
        if(vec[n]!=0) {
            return vec[n];
        }
        
        return vec[n] = climbStairs(n-1) + climbStairs(n-2);
    }
};