class Solution {
public:
    ListNode* rotateRight(ListNode* head)
    {
        ListNode* temp=head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        
        ListNode* k=temp->next;
        temp->next=NULL;
        k->next=head;
        head=k;
        
        return head;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
            return NULL;
        
        if(head->next==NULL)
            return head;
        
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        k=k%count;
        while(k--)
        {
            head=rotateRight(head);
        }
        return head;
    }
};
