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
    ListNode* removeNodes(ListNode* head) {
        if (!head) return nullptr;

        head = reverse(head);

        int maxVal = 0;
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while (curr) {
            if (curr->val >= maxVal) {
                maxVal = curr->val;
                prev = curr;
            } else {
                prev->next = curr->next;
            }
            curr = curr->next;
        }

        return reverse(head);
    }

    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;

        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }

        return prev;
    }
};