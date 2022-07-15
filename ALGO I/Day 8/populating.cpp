class Solution {
public:
    Node* connect(Node* root) {
        // O(1) memory solution using BFS
        if(!root) return nullptr;
        Node *cur = root, *nxt = cur->left;
        
        while(cur && nxt) {
            cur->left->next = cur->right;
            if(cur->next) {
                cur->right->next = cur->next->left;
            }
            cur = cur->next;
            if(!cur) {
                cur = nxt;
                nxt = cur->left;
            }
        }
        
        return root;
    }
};