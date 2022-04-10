class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return NULL;
        
        ListNode *temp=head;
        
        while(temp->next!=NULL)
        {
            if(temp->next->val==temp->val)
            {
                ListNode* k=temp->next;
                if(k->next==NULL)
                {
                    temp->next=NULL;
                    delete(k);
                    break;
                }
                temp->next=temp->next->next;
                k->next=NULL;
                delete(k);
            }
            else
            temp=temp->next;
        }
        
        return head;
    }
};
