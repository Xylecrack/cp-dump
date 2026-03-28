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
    ListNode* reverseList(ListNode* head) {
        ListNode* last = nullptr;
        ListNode* start=head;
        while(start !=nullptr){
            ListNode*temp=start->next;
            start->next = last;
            last = start;
            start = temp;
        }
        return last;

    }
};