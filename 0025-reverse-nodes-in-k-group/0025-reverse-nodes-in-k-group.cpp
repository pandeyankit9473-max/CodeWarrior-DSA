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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        // Step 1: check if k nodes exist
        ListNode* temp = head;
        int count = 0;
        
        while(temp != NULL && count < k) {
            temp = temp->next;
            count++;
        }
        
        // If less than k → return as it is
        if(count < k) return head;
        
        // Step 2: reverse first k nodes
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        count = 0;
        
        while(curr != NULL && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        // 🔥 THIS IS THE CONFUSING PART
        if(next != NULL) {
            head->next = reverseKGroup(next, k);
        }
        
        return prev;
    }
};

// in future i will have to do all other approches to..
