class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* k1=headA;
        ListNode* k2=headB;
        while(k1!=NULL && k2!=NULL)
        {
             while(k1!=NULL && k2!=NULL)
            {
              if(k1==k2)
                return k1;
            
              k2=k2->next;
           }
            k1=k1->next;
            k2=headB;
        }
       
        return NULL;
    }
};
