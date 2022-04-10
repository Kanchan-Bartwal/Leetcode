class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
    
    while(head != NULL && head -> val == val)
        head = head -> next;
    
    if(head == NULL)        
        return head;
    
    ListNode* curr = head;
    
     while(curr -> next != NULL)
     {
        if(curr -> next -> val == val)
         curr -> next = curr -> next -> next;
        else  
            curr = curr -> next;
     }
    
    return head;
  }
};
