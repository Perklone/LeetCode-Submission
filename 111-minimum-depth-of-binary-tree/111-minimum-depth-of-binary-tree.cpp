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
    int minDepth(TreeNode* root) {
        int res = 0;
        if(root == NULL) {
            return res;
        }
        queue<TreeNode*> que;
        que.push(root);
        
        while(!que.empty()) {
            res++;
            int levelsize = que.size();
            for(int i=0;i<levelsize;i++) {
                TreeNode* curr = que.front();
                que.pop();
                if(curr->left == NULL && curr->right == NULL) {
                    return res;
                }
                if (curr->left != NULL) {
                    que.push(curr->left);
                }
                if (curr->right != NULL) {
                    que.push(curr->right);
                }
            }
        }
        return res;
    }
};