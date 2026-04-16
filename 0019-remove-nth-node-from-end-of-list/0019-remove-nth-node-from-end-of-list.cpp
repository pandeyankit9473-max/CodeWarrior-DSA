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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int cnt=0;
        if(temp==NULL) return head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        if(n == cnt){
         return head->next;
         }
       int count=0; temp=head;
        while(temp!=NULL){
            count++;
            if(count==cnt-n)
            temp->next=temp->next->next;
            else
            temp=temp->next;
        }
        return head;
    }
};