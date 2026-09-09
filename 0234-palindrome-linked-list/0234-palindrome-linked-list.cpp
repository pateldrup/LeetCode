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
    bool isPalindrome(ListNode* head){
        ListNode* address = NULL;
        ListNode* i= head;
        while(i!=   NULL){
            ListNode* newNode = new ListNode();
            newNode->next = address;
            address = newNode;
            newNode->val=i->val;
            i = i->next;
        }
        i=head;
        ListNode* j = address;
        while(i!=NULL){
            if(i->val != j->val){
                return false;
            }

            i= i->next;
            j=j->next;
        }
        return true;
    }
};