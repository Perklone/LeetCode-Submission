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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> results;
        queue<TreeNode*>queue;
        
        if(root==nullptr) return results;
        
        queue.push(root);
        while(!queue.empty()){
            int levelSize = queue.size();
            vector<int>currentLevel;
            
            for(int i=0;i<levelSize;i++){
                TreeNode* curr = queue.front();
                queue.pop();
                currentLevel.push_back(curr->val);
                if(curr->left!=nullptr){
                    queue.push(curr->left);
                }
                if(curr->right!=nullptr){
                    queue.push(curr->right);
                }
            }
            results.push_back(currentLevel);
        }
        return results;
    }
};