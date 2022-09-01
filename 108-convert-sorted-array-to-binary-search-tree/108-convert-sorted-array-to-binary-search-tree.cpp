/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0) {
            return NULL;
        }
        return insertx(nums, 0, nums.size()-1);
    }
    
    TreeNode* insertx(vector<int>& nums,int start,int end) {
        if(start>end) return NULL;
        
        int mid = start + (end-start)/2;
        
        TreeNode* temp = new TreeNode(nums[mid]);
        
        temp->left = insertx(nums,start,mid-1);
        temp->right = insertx(nums,mid+1,end);
        
        return temp;
    }
};