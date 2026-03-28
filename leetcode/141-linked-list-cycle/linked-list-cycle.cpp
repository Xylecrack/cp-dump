/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head) {
        bool res = false;
        ListNode* track = head;
        while (track != nullptr) {
            if (track->val == 10001) {
                return true;
            }
            track->val = 10001;
            track = track->next;
        }
        return false;
    }
};