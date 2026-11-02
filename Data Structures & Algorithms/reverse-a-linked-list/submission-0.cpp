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
    ListNode* reverseList(ListNode* head) {
        ListNode* first;
        ListNode* second;
        ListNode* temp;
        if(head==nullptr){
            return head;
        }
        first = head;
        if(first->next==nullptr){
            return first;
        }
        second = first->next;

        while(second!=nullptr){
         temp = second->next;
         second->next = first;
         if(first==head){
            head->next = nullptr;
         }
         first = second;
         second = temp;
        }
        return first;
    }
};
