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
    int diameterOfBinaryTree(TreeNode* root) {
        int depth = 0;
        traverse(root, depth);
        return depth;
    }
    int traverse(TreeNode* root, int &depth) {
        if(root == NULL) {
            return 0;
        }
        // cout << root->val << " " << temp << " " << depth << endl;
        
        int leftDepth = traverse(root->left, depth);
        int rightDepth = traverse(root->right, depth);
        
        depth = max(depth,leftDepth+rightDepth);
        return 1+max(leftDepth,rightDepth);
    }
};

