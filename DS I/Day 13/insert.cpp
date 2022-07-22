class Solution {
private: 
    void helper(TreeNode* root, int val){
		
		// If the given val is greatet than current the go to left
        if(root->val > val){
			// If left is NULL then attach a new node
            if(root->left == NULL){
                TreeNode *node = new TreeNode(val);
                root->left = node;
            }
			// If not then go to the left
            else helper(root->left, val);
        }
        else{
			// If right is NULL then attach a new node
            if(root->right == NULL){
                TreeNode *node = new TreeNode(val);
                root->right = node;
            }
			// If not then go to the right
            else helper(root->right, val);
        }
    }
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
		// If the given root is NULL then redefine and return
        if(!root){ root = new TreeNode(val); return root; }
		
		// Call recursive function
        helper(root, val);
        
		// Return the root
		return root;
    }
};