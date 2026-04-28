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
        ListNode* temp=head;
        ListNode* slow=head;
        ListNode* fast=head;
        if(temp==NULL || temp->next==NULL) return NULL;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        while(temp!=NULL && temp->next!=NULL){
           
            if(temp->next==slow)
            temp->next=temp->next->next;
            else
            temp=temp->next;
        }
        return head;
    }
};