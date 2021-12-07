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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if(root==nullptr) return result;
        queue<TreeNode*>queue;
        queue.push(root);
        
        while(!queue.empty()){
            int levelSize = queue.size();
            
            for(int i=0;i<levelSize;i++){
                TreeNode* curr = queue.front();
                queue.pop();
                if(i==levelSize-1) result.push_back(curr->val);
                
               
                if(curr->left!=nullptr){
                    queue.push(curr->left);
                }
                if(curr->right!=nullptr){
                    queue.push(curr->right);
                }
                
                
            }
            
        }
        return result;
    }
};