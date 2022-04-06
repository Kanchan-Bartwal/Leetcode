class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2==NULL)
            return NULL;
        if(l1==NULL && l2!=NULL)
            return l2;
        if(l2==NULL && l1!=NULL)
            return l1;
        
        ListNode* l3;
        ListNode *head;
        if(l1->val<=l2->val)
        {
            l3=l1;
            l1=l1->next;
        }
            
        else
        {
            l3=l2;
            l2=l2->next;
        }
            head=l3;
        
        while(l1!=NULL && l2!=NULL)
        {
             if(l1->val<=l2->val)
        {
            l3->next=l1;
            l1=l1->next;
                 l3=l3->next;
        }
            
        else
        {
            l3->next=l2;
            l2=l2->next;
            l3=l3->next;
        }
        }
        
        if(l2==NULL && l1!=NULL)
        {
            while(l1!=NULL)
            {
                l3->next=l1;
                l1=l1->next;
                l3=l3->next;
            }
            
        }
        if(l1==NULL && l2!=NULL)
        {
           while(l2!=NULL)
            {
                l3->next=l2;
                l2=l2->next;
               l3=l3->next;
            } 
        }
        return head;
    }
};
