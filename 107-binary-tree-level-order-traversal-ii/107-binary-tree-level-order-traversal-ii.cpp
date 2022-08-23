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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if(root == NULL) {
            return res;
        }
        queue<TreeNode*> q;
        
        q.push(root);
        
        while(!q.empty()) {
            int level = q.size();
            vector<int> vec;
            
            for(int i = 0;i<level;i++){
                TreeNode* curr = q.front();
                q.pop();
                
                vec.push_back(curr->val);
                if(curr->left != NULL) {
                    q.push(curr->left);
                }
                if(curr->right !=NULL){
                    q.push(curr->right);
                }
            }
            res.push_back(vec);
            
        }
        reverse(res.begin(),res.end());
        return res;
    }
};