class Solution {
public:
    vector<int>vec = vector<int>(31,0);
    int fib(int n) {
        if(n<=1){
            return n;
        }
        if(vec[n]!= 0) {
            return vec[n];
        }
        return vec[n] = fib(n-1) + fib(n-2);
    }
};