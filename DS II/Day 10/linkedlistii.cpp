class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        while(true){
            if(!fast || !fast->next)
                return NULL;
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
                break;
        }
        slow = head;
        while(fast != slow){
            fast = fast->next;
            slow = slow->next;
        }
        return fast;
    }
};