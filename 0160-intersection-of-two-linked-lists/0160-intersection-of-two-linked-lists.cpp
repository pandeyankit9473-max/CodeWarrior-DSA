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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    
    if(headA == NULL || headB == NULL) return NULL;

    ListNode* temp1 = headA;
    ListNode* temp2 = headB;

    while(temp1 != temp2) {

        if(temp1 == NULL)
            temp1 = headB;
        else
            temp1 = temp1->next;

        if(temp2 == NULL)
            temp2 = headA;
        else
            temp2 = temp2->next;
    }

    return temp1;
}
};

//  map<ListNode* ,int>mpp;
//         ListNode *temp=headA;
//         while(temp!=NULL){
//             mpp[temp]=1;
//             temp=temp->next;
//         }
//         temp=headB;
//         while(temp!=NULL){
//             if(mpp.find(temp)!=mpp.end())
//             return temp;
//             temp=temp->next;
//         }
//         return NULL;