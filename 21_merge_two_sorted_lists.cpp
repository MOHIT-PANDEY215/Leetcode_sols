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
    void insert(ListNode *&node,int data){
        ListNode *temp=new ListNode(data);
        if(node==NULL){
            node=temp;
        }
        else{
            ListNode *t=node;
            while(t->next){
                t=t->next;
            }
            t->next=temp;
        }
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> vec;
        ListNode *temp=list1;
        while(temp){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        temp=list2;
        while(temp){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        temp=NULL;
        sort(vec.begin(),vec.end());
        for(auto x:vec){
            insert(temp,x);
        }
        return temp;
    }
};