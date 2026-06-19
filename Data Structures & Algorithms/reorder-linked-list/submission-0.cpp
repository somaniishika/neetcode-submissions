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
    ListNode* split(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            }
            return slow;
        }

    ListNode* reverse(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(curr){
            ListNode* front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* middle=split(head);
        ListNode* newnode=reverse(middle->next);
        middle->next=nullptr;

        ListNode* first=head;
        ListNode* second=newnode;
        
        while(first && second){
            ListNode* temp1=first->next;
            ListNode* temp2=second->next;

            first->next = second;
            second->next = temp1;

            first=temp1;
            second=temp2;
        }    
    }
};
