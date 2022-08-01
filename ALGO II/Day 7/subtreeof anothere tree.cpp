class Solution {
public:
    
    bool check(TreeNode* root,TreeNode* sub){
        if(!root && !sub)return true;
        if((!root && sub)||(!sub && root))return false;
        
        if(root->val!=sub->val)return false;
        
        return check(root->left,sub->left)&& check(root->right,sub->right);
    }
    
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {     
        if(!root && !subRoot)return true;
        if((!root && subRoot)||(!subRoot && root))return false;
           
        if(check(root,subRoot))return true;
        
        return isSubtree(root->left,subRoot)|| isSubtree(root->right,subRoot);
        
    }
};