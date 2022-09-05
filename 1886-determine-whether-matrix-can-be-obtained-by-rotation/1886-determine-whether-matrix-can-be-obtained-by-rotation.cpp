class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i = 0;i<4;i++) {
            if(rotate(mat,target)==true) {
                return true;
            }
        }
        return false;
    }
    bool rotate(vector<vector<int>>& matrix,vector<vector<int>>& target) {
        int l = 0;
        int r = matrix[0].size()-1;
        
        while(l<r) {
            for(int i = 0;i<r-l;i++) {
                int t = l;
                int b = r;
                int tl = matrix[t][l+i];
                matrix[t][l+i] = matrix[b-i][l];
                matrix[b-i][l] = matrix[b][r-i];
                matrix[b][r-i] = matrix[t+i][r];
                matrix[t+i][r] = tl;
            }
            l++;
            r--;
        }
        if(matrix == target) {
            return true;
        }
        else {
            return false;
        }
    }
};