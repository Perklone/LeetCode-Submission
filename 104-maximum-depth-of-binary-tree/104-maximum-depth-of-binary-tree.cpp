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
    int maxDepth(TreeNode* root) {
        int curr = 0;
        curr = traverse(root,curr);
        return curr;
    }
    int traverse(TreeNode* root,int depth) {
        if(root == NULL) {
            return depth;
        }
        depth+=1;
        return max(traverse(root->left,depth),traverse(root->right,depth));
    }
};