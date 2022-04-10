class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return NULL;
        
        int count=0;
        ListNode* temp=head;
        
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        
        count=count/2-1;
        
        temp=head;
        while(count--)
        {
            temp=temp->next;
        }
        if(temp->next!=NULL)
        temp->next=temp->next->next;
        return head;
    }
};
