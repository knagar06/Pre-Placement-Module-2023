class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *L1 = headA,*L2 = headB;
        while(L1 != L2){
            L1 = L1->next;
            L2 = L2->next;
            if(!L1 && !L2)
                break;
            L1 = L1 ? L1 : headB;
            L2 = L2 ? L2 : headA;
        }
        return L1;
    }
};