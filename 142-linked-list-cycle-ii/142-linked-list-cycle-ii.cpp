/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        int len = 0;
        
        if(fast == NULL || fast->next == NULL) {
            return NULL;
        }
        while(fast != NULL && fast->next != NULL  ) {
            fast = fast->next->next;
            slow = slow->next;
            
            if(fast == slow) {
                cout << "A";
                len = checkLength(slow);
                return findCycle(head,len);
            }
        }
        return NULL;
        
    }
    int checkLength(ListNode* x) {
        ListNode* temp = x;
        int len = 0;
        
        do {
            temp = temp->next;
            len++;
        }while(x!=temp);
        return len;
    }
    
    ListNode* findCycle(ListNode* head, int len) {
        ListNode* x = head;
        ListNode* y = head;
        
        while(len > 0) {
            y = y->next;
            len--;
        }
        
        while(x!=y) {
            x = x->next;
            y = y->next;
        }
        return x;
    }
};