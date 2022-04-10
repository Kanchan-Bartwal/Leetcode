class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL)
            return NULL;
        
        ListNode* turtle=head;
        ListNode* rabit=head;
        
        while(rabit!=NULL && rabit->next!=NULL)
        {
            turtle=turtle->next;
            rabit=rabit->next->next;
        }
        return turtle;
    }
};
