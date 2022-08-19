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
        vector<vector<int>> res;
        vector<int> vec;
        traverse(root,vec,res,targetSum);
        return res;
    }
    void traverse(TreeNode* root, vector<int>&vec,vector<vector<int>>&res,int targetSum) {
        if(root == NULL) {
            return;
        }
        vec.push_back(root->val);
        if(targetSum-root->val == 0 && root->left == NULL && root->right == NULL){
            res.push_back(vec);
        }
        else {
            traverse(root->left,vec,res,targetSum-root->val);
            traverse(root->right,vec,res,targetSum-root->val);
        }
        vec.pop_back();
    }
};