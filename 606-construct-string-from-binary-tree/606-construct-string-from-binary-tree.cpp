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
    string tree2str(TreeNode* root) {
        if(root==NULL) {
            return "";
        }
        string s;
        traverse(root,s);
        return s;
    }
    void traverse(TreeNode* root, string &s) {
        if(root == NULL) {
            return;
        }
        s+=to_string(root->val);
        if(root->left != NULL) {
            s+="(";
            traverse(root->left,s);
            s+=")";
        }
        else if(root->right != NULL) {
             s+="()";
        }
        if(root->right != NULL) {
            s+="(";
            traverse(root->right,s);
            s+=")";
        }
        
       
    }
};