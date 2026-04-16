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
        ListNode* slow=head;
        ListNode* fast=head;
        // first move fast the given n steps;
        for(int i=0;i<n;i++) fast=fast->next;
        //edge case when it said to delete head...and fast became null;
        if(fast==NULL) return head->next; //return node ater head and so on...
        // now move both together...
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        // now boom slow will be just before of the node that we have to delete..
        slow->next=slow->next->next;
        return head;

    }
};
// ListNode* temp=head;
//         int cnt=0;
//         if(temp==NULL) return head;
//         while(temp!=NULL){
//             cnt++;
//             temp=temp->next;
//         }
//         if(n == cnt){ // edge case handling when only one element in list..
//          return head->next;
//          }
//        int count=0; temp=head;
//         while(temp!=NULL){
//             count++;
//             if(count==cnt-n)
//             {
//             temp->next=temp->next->next;
//             break;
//             }
//             else
//             temp=temp->next;
//         }
//         return head;