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
    ListNode* deleteMiddle(ListNode* head) {
       
        if(head->next == NULL || head == NULL) {
            delete head;
            return NULL;
        }
        ListNode* temp = head;
        int idx = 1;
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast!=NULL && fast->next != NULL) {
            if(slow != head){
               temp = temp->next; 
            } 
            fast = fast->next->next;
            slow = slow->next;
        }
        temp->next = slow->next;
        delete slow;
        return head;
    }
};