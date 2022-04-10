class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL)
            return head;
        
        ListNode* odd=head;
        ListNode* eve=head->next;
        ListNode* holdEve=head->next;
        
        while(odd->next!=NULL && eve->next!=NULL)
        {
            odd->next=odd->next->next;
            eve->next=eve->next->next;
            
            odd=odd->next;
            eve=eve->next;
        }
        
        odd->next=holdEve;
        return head;
    }
};
