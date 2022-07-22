class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val){
        // go on iteration until u reach null or or u reach the value
        while(root!=NULL and root->val!=val){
            // as Left<Node<Right
            // so 2 itration can be takes place
            if(val<root->val){
                root=root->left;
            }
            // val>root->val
            else
                root=root->right;
        }
        return root;
    }
};