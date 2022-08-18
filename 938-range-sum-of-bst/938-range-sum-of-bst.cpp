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
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> vec;
        traverse(root,low,high,vec);
        int len = vec.size();
        int sum = 0;
        for(int i=0;i<len;i++){
            sum+=vec[i];
        }
        
        return sum;
    }
private:
    void traverse(TreeNode*root, int low, int high, vector<int>&vec) {
        if(root == NULL) {
            return;
        }
        traverse(root->left,low,high,vec);
        if(root->val >=low && root->val<= high) {
            vec.push_back(root->val);
        }
        traverse(root->right,low,high,vec);
        
    }
};