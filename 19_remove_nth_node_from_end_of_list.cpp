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
        int length=0;
        ListNode *temp=head;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        if(head==NULL)
        return head;
        if(length==n){
            head=head->next;
            return head;
        }
        temp=head;
        int r=length-n-1,cnt=0;
        while(temp){
            if(cnt==r){
                temp->next=temp->next->next; 
            }
            cnt++;
            temp=temp->next;
        }
        return head;
    }
};