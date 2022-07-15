class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
      ListNode* curr=head;
      ListNode* temp;
      int l=0;
      while(curr)
      {
        l++;
        curr=curr->next;
      }
      l=l-n+1;
      if(l==1)
        return head->next;
      curr=head;
      ListNode* prev=NULL;
      while(curr)
      { 
        l--;
        if(l==0)
        { 
          if(curr->next)
          { 
            prev->next=curr->next;
           
          }
          else
            prev->next=NULL;
         
        }
        prev=curr;
        curr=curr->next;
      
      }
      return head;
    }
};