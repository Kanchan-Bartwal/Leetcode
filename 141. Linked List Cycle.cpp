class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *t=head;
        ListNode *r=head;
        
        while(r!=NULL && r->next!=NULL)
        {
            t=t->next;
            r=r->next->next;
            
            if(t==r)
                return true;
        }
         return false;
    }
};
