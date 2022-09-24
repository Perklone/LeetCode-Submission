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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> vec;
        vector<int> ans;
        
        dfs(root,targetSum,vec,ans);
        return vec;
    }
    void dfs(TreeNode* root, int targetSum, vector<vector<int>>&vec,vector<int>&ans) {
        if(root == NULL) {
            return;
        }
        ans.push_back(root->val);
        if(root->left == NULL && root->right == NULL && targetSum == root->val) {
            vec.push_back(ans);
        }
        
        dfs(root->left,targetSum-(root->val),vec,ans);
        dfs(root->right,targetSum-(root->val),vec,ans);
        ans.pop_back();
        
    }
};