class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL)
            return NULL;
        
        ListNode* temp=head;
        int c=1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            c++;
        }
        
        if(k==1 || k==c)
        {
            int f=head->val;
            head->val=temp->val;
            temp->val=f;
            return head;
        }
        
        if(c>k)
        {
            temp=head;
            int s=k;
            while(--k && temp!=NULL)
            {
                temp=temp->next;
            }
            ListNode* t=head;
            c=c-s+1;
            while(--c && t!=NULL)
            {
                t=t->next;
            }
            
            c=t->val;
            t->val=temp->val;
            temp->val=c;
        }
       
        return head;
    }
};
