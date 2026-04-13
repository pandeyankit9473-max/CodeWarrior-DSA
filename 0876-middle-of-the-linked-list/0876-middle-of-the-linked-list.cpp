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
    ListNode* middleNode(ListNode* head) {
      ListNode *slow=head;
      ListNode *fast=head;
      while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
      } 
      return slow;
    }
};
//  ListNode* temp=head;
//         if(temp==NULL) return 0;
//         int cnt=0 ,cnt1=0;
//         while(temp!=NULL) {
//             cnt++;
//             temp=temp->next;
//         }
//         int midnode=(cnt/2);
//         temp=head;
//         while(midnode!=0){
//            midnode--;
//            temp=temp->next;
           

//         }
//         return temp;