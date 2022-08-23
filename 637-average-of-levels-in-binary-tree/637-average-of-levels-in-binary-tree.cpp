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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        if(root == NULL) {
            return res;
        }
        queue<TreeNode*> que;
        que.push(root);
        
        while(!que.empty()) {
            int levelSize = que.size();
            long long sum = 0;
            for(int i=0;i<levelSize;i++) {
                TreeNode* curr = que.front();
                que.pop();
                sum+=curr->val;
                if(curr->left != NULL) {
                    que.push(curr->left);
                }
                if(curr->right != NULL) {
                    que.push(curr->right);
                }
            }
            double ans = (double)sum/levelSize;
            res.push_back(ans);
        }
        return res;
    }
};