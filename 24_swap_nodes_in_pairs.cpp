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
    ListNode* swapPairs(ListNode* head) {
        ListNode *first=head;
        ListNode *second=head;
        while(first && second &&first->next&&second->next){
            int temp=first->val;
            first->val=second->next->val;
            second->next->val=temp;
            first=first->next->next;
            second=second->next->next;
        }
        return head;
    }
};