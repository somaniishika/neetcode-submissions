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
       Node *iter  = head;
        Node *front = head;

        while(iter!=NULL){
            front = iter->next;
            Node *copy = new Node(iter->val);
            iter->next = copy;
            copy->next = front;
            iter = front;
        }

        // done creating the copy nodes
        iter = head;

        while(iter!=NULL){
            if(iter->random!=NULL){
                iter->next->random = iter->random->next;
            }
            iter = iter->next->next;
        }

        //done copying the random values from the list

        iter = head;
        Node *start = new Node(0);
        Node *copy = start;
        
        while(iter!=NULL){
            front = iter->next->next;  //placing front
            copy->next = iter->next;  //placing the copy pointer (our answer)
            iter->next = front; //making the list as original
            copy = copy->next;
            iter = front;
        }
        return  start->next; 
    }
};
