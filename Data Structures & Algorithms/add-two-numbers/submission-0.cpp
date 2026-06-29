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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* tail=new ListNode(0);
        ListNode * dummy=tail;
        int carry=0;
        while(l1 || l2 || carry){
            int x=0;
            int y=0;
            if(l1){
                x= l1->val;
                l1=l1->next;
            }
            if(l2){
                y=l2->val;
                l2=l2->next;
            }
            int total=x+y+carry;
            carry=total/10;
            ListNode* temp=new ListNode(total%10);
            dummy->next=temp;
            dummy=dummy->next;
        }
        return tail->next;

    }
};
