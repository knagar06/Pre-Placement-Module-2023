class Solution {
public:
    void inorder(TreeNode* root, vector<int> &data) {
        if(root) {
            inorder(root->left, data);
            data.push_back(root->val);
            inorder(root->right, data);
        }    
        return;
        
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> val;
        inorder(root, val);
        return val;
    }
};