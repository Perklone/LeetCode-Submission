class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0;
        int end = matrix.size()*matrix[0].size()-1;
        int check = matrix[0].size();
        while(start<=end) {
            int mid = start + (end-start)/2;
            
            if(matrix[mid/check][mid%check] == target) {
                return true;
            }
            else if(matrix[mid/check][mid%check] > target) {
                end = mid-1;
            }
            else {
                start = mid+1;
            }
        }
        return false;
    }
};