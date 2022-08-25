class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int start = 0;
        int len = blocks.length();
        int temp = 0;
        int res = 0;
        int x = 101;
        for(int end=0;end<len;end++) {
            if(blocks[end] == 'W') {
                temp++;
            }
            if(blocks[end] == 'B') {
                res++;
            }
            if(res == k) {
                return 0;
            }
            if(end-start+1>=k) {
                x = min(x,temp);
                if(blocks[start] == 'W') {
                    temp--;
                }
                if(blocks[start]=='B') {
                    res--;
                }
                start++;
            }
           
        }
        return x;
    }
};