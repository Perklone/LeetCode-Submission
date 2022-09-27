class Solution {
public:
    string pushDominoes(string dominoes) {

        int len = dominoes.length();
        deque<pair<int,char>> dq;
        
        for(int i = 0; i < len; i++ ) {
            if(dominoes[i]!='.') {
                pair<int,char> x = make_pair(i,dominoes[i]);
                dq.push_back(x);
            }
        }
        while(!dq.empty()) {
            int a = dq.front().first;
            char b = dq.front().second;
            dq.pop_front();
            if(b == 'L' && a > 0 && dominoes[a-1] == '.') {
                pair<int,char> x = make_pair(a-1,'L');
                dq.push_back(x);
                dominoes[a-1] = 'L';
            }
            else if(b == 'R') {
                if(a+1 < dominoes.length() && dominoes[a+1] =='.') {
                    if(a + 1 < dominoes.length() && dominoes[a+2] == 'L') {
                        dq.pop_front();
                    }
                    else {
                        pair<int,char> x = make_pair(a+1,'R');
                        dq.push_back(x);
                        dominoes[a+1] = 'R';
                    }
                }
            }
        }
        return dominoes;
        
        
    }
};