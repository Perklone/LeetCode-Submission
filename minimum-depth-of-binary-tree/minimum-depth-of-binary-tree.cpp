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
        int result = 0;
        if (root==nullptr) return result;
        queue<TreeNode*>queue;
        queue.push(root);
        
        while(!queue.empty()){
            int levelSize = queue.size();
             result++;
            for(int i=0;i<levelSize;i++){
                TreeNode* curr = queue.front();
                queue.pop();
                if(curr->left==nullptr && curr->right==nullptr){
                    return result;
                }
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