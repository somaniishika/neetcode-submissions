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
    ListNode* removeElements(ListNode* head, int val) {
        vector<int>arr;
        ListNode* current=head;
        while(current){
            if(current->val!=val){
                arr.push_back(current->val);
            }
            current=current->next;
        }
        if(arr.empty()){
            return NULL;
        }
        ListNode* ans=new ListNode(arr[0]);
        current=ans;
        for(int i=1;i<arr.size();i++){
            ListNode* node=new ListNode(arr[i]);
            current->next=node;
            current=current->next;
        }
        return ans;
    }
};