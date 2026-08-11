class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        unordered_set<int> s(nums.begin(), nums.end());

        while(head != NULL && s.count(head->val))
            head = head->next;

        ListNode* temp = head;

        while(temp != NULL && temp->next != NULL) {
            if(s.count(temp->next->val))
                temp->next = temp->next->next;
            else
                temp = temp->next;
        }

        return head;
    }
};