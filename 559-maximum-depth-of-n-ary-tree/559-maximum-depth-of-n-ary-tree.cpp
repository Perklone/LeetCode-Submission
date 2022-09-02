/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(root == NULL) {
            return 0;
        }
        int res = 1;
        res = depth(root,res);
        return res;
    }
    
    int depth(Node* root, int res) {
        if(root == NULL) {
            return res;
        }
        int len = root->children.size();
        int temp = res + 1;
        
        
        for(int i = 0; i < len; i++) {
            res = max(res,depth(root->children[i],temp));
        }
        return res;
    }
};