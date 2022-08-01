class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        if head == None or head.next == None :
            return head
        
        newhead = ListNode('a',head)
        prev = head
        curr = head.next
        flag = 0
        lk = newhead
        
        while(curr) :
            if curr.val == prev.val :
                flag = 1
                
            else :
                if flag == 1 :
                    lk.next = curr
                    flag = 0
                    
                else :
                    lk = prev
                    
            prev = curr
            curr = curr.next
            
        if flag == 1 :
            lk.next = curr
        return newhead.next