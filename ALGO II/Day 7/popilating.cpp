Node* connect(Node* root) 
{
    if (root==NULL) return NULL;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.empty()!=1)
    {
        Node* t=q.front();
        q.pop();
        if (t==NULL)
        {
            if (q.size()>0)
            {
                q.push(NULL);
            }
            continue;
        }
        
        else
        {
            t->next=q.front();
            if (t->left!=NULL)
            {
                q.push(t->left);
            }
            if (t->right!=NULL)
            {
                q.push(t->right);
            }
        }
    }
    return root;
}