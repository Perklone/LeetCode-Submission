class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int startrow = 0;
        int startcol = 0;
        int endrow = matrix.size()-1;
        int endcol = matrix[0].size()-1;
        
        while(startrow <= endrow && startcol <= endcol) {
            int midrow = startrow + (endrow-startrow) /2;
            int midcol = startcol + (endcol-startcol) /2;

            if(matrix[midrow][midcol] == target) {
                return true;
            }
            else if(matrix[midrow][midcol]>target){
                if(matrix[midrow][0]>target){
                    
                    endrow = midrow-1;
                }
                else{
                    endcol = midcol-1;
                }
            }else{
                if(matrix[midrow][matrix[0].size()-1]<target){
                    startrow = midrow+1;
                }
                else{
                    startcol = midcol+1;
                }
            }
        }
        
        return false;
    }
};