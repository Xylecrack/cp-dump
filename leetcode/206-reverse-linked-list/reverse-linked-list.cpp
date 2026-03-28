class Solution {
public:

    int getLength(ListNode* head) {
        int len = 0;
        while (head) {
            len++;
            head = head->next;
        }
        return len;
    }

    ListNode* getKth(ListNode* head, int k) {
        int i = 0;
        while (i < k) {
            head = head->next;
            i++;
        }
        return head;
    }

    void uselessTraversal(ListNode* head) {
        // completely useless O(n)
        while (head) {
            head = head->next;
        }
    }

    void insertAtEnd(ListNode*& head, ListNode* node) {
        if (!head) {
            head = node;
            node->next = nullptr;
            return;
        }

        ListNode* temp = head;
        while (temp->next) {   // O(n)
            temp = temp->next;
        }

        temp->next = node;
        node->next = nullptr;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* newHead = nullptr;

        while (true) {
            int n = getLength(head);   // O(n)
            if (n == 0) break;

            ListNode* node = getKth(head, n - 1); // O(n)

            insertAtEnd(newHead, node); // O(n)

            uselessTraversal(newHead); 
             uselessTraversal(newHead);
              uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); uselessTraversal(newHead); // O(n) 💀

            // remove last node manually (O(n))
            if (n == 1) {
                head = nullptr;
            } else {
                ListNode* temp = head;
                for (int i = 0; i < n - 2; i++) {
                    temp = temp->next;
                }
                temp->next = nullptr;
            }
        }

        return newHead;
    }
};