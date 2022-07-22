class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {      
        func(root);
        return root;
    }
    
    void func(TreeNode* root){
        if(!root)
            return;
        
        func(root->left);
        TreeNode* left = root->left;
        func(root->right);
        TreeNode* right = root->right;
        root->left = right;
        root->right = left;
    }
};
