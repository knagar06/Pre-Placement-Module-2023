class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k == 1)
            return head;
        ListNode *nextNode, *prev = NULL,*pTail,*pHead, *realHead = head,*join = NULL;
        int t = 0;
        bool FirstTime = true;
        while(head){
            if(t++ == k){
                t = 0;
                if(FirstTime){
                    realHead = pHead;
                    FirstTime = !FirstTime;
                }
                else
                    join->next = pHead;
                join = pTail;
            }
            else{
                if(t == 1)
                    prev = NULL;
                nextNode = head->next;
                head->next = prev;
                if(t == 1)
                    pTail = head;
                else if(t == k)
                    pHead = head;
                prev = head;
                head = nextNode;
            }
        }
        if(t < k){
            ListNode *p = NULL;
            while(prev){
                nextNode = prev->next;
                prev->next = p;
                p = prev;
                prev = nextNode;
            }
            join->next = p;
        }
        else if(t == k && join)
            join->next = pHead;
        return FirstTime ? pHead : realHead;
    }
};