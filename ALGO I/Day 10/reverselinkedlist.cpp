class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *p=NULL;
        ListNode *c=head;
        ListNode *n=NULL;
        while(c!=NULL){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        head=p;
        return head;
    }
};