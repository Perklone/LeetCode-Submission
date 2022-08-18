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
    vector<int> postorder(Node* root) {
        vector<int>vec;
        traverse(root,vec);
        return vec;
    }
private:
    void traverse(Node*root, vector<int>&vec) {
        if(root == NULL ){
            return;
        }
        int len = root->children.size();
        for(int i=0;i<len;i++) {
            traverse(root->children[i],vec);
        }
        vec.push_back(root->val);
    }
};