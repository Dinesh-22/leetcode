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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(-1);
        ListNode* leftPre = dummy;
        dummy->next = head;
        ListNode* curr = head;
        for(int i=0;i<left-1;i++){
            leftPre = leftPre->next;
            curr = curr->next;
        }
        ListNode* subListHead = curr;
        ListNode* prev = NULL;
        //reverseBetween 
        for(int i=0;i<=right-left;i++){
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr=forward;
        }
        leftPre -> next = prev;
        subListHead->next = curr;


        return dummy->next;
        
    }
};