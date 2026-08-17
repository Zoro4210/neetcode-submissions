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
    ListNode* mergeTwoLists(ListNode* L1, ListNode* L2) {
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        while(L1!=nullptr&L2!=nullptr){
            if(L1->val>=L2->val){
                temp->next=L2;
                temp=temp->next;
                L2=L2->next;
            }
            else{
                temp->next=L1;
                temp=temp->next;
                L1=L1->next;
            }
        }
        if(L1==nullptr){
            temp->next=L2;
        }
        else{
            temp->next=L1;
        }
        return dummy->next;
    }
};
