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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* tail=new ListNode(0);
        ListNode* dummy=tail;

        ListNode* head1=list1;
        ListNode* head2=list2;

        while(head1 && head2){
            if(head1->val > head2->val){
                dummy->next=head2;
                head2=head2->next;
            }else if(head2->val > head1->val){
                dummy->next=head1;
                head1=head1->next;
            }else{
                dummy->next=head1;
                head1=head1->next;
            }
            dummy=dummy->next;
        }
        if(head1){
            dummy->next=head1;
        }else{
            dummy->next=head2;
        }
        return tail->next;
    }
};
