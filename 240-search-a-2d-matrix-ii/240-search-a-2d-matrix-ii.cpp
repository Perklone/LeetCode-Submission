class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        ios_base::sync_with_stdio(false);
        int row = matrix.size()-1;
        int col = 0;
        
        while(row>=0 && col<=matrix[0].size()-1) {
            if(matrix[row][col] == target) {
                return true;
            }
            else if(matrix[row][col]>target) {
                row--;
            }
            else {
                col++;
            }
        }
        return false;
        
    }
};