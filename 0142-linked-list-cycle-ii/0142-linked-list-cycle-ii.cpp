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
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){ // means here is the cycle
                slow=head; // head ko slow me daldo 
                while(slow!=fast){ // just moving one step till they didnt meet.
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;
            }

        }
        return NULL;
    }
};
// 1. slow-fast se cycle detect
// 2. slow ko head pe le jao
// 3. slow & fast same speed
// 4. jahan milen = cycle start