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
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        // reversing the second halves menas after mid
        ListNode* prev=NULL;
        ListNode* curr=slow; // mid of the list
        ListNode* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        ListNode* first=head;
        ListNode* second=prev; // prev will be the last element of the list..
        while(second!=NULL){
            if(first->val!=second->val)
            return false ;
            first=first->next;
            second=second->next;
        }
        return true;
    }
};
// find middle , reverse second half , compare both halves ...