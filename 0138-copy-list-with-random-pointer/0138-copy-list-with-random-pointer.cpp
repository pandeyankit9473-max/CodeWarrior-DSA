/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL) return NULL;
        map<Node* ,Node*>mpp;
        Node* temp=head;
        while(temp!=NULL){
            Node* newNode= new Node(temp->val);
            mpp[temp]=newNode;
            temp=temp->next;
        } // copy is ready i.e: A=a;
        // now we have to coonect the respective node in the map
        temp=head;
        while(temp!=NULL){
            mpp[temp]->next=mpp[temp->next];
            mpp[temp]->random=mpp[temp->random];
            temp=temp->next;
        }
        return mpp[head];
    }
};