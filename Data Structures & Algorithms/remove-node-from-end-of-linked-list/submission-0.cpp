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
        ListNode* fast=head;
        ListNode* slow=head;

        int count=0;
        while(fast!=NULL && count!=n){
            fast=fast->next;
            count++;
        }
        if(fast==NULL){
            ListNode* temp=head;
            head=head->next;

            delete temp;
            return head; 
        }
        ListNode* prev=NULL;
        
        while(fast!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* temp=slow;
        prev->next=temp->next;
        temp->next=NULL;

        delete temp;

        return head;
    }
};
