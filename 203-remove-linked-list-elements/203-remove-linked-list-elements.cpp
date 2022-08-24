/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
       
        ListNode* dum = new ListNode();
        dum->val = -1;
        dum->next = head;
        
        ListNode* curr = head;
        ListNode* prev = dum;
        while(curr!=NULL) {
            if(curr->val == val) {
                prev->next = curr->next;
                // delete curr;
                curr = curr->next;
                
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
        return dum->next;
    }
};
