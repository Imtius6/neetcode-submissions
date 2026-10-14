class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr) {
            return nullptr;
        }

        int cnt = 0;
        ListNode* temp = head;

        
        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }

      
        if (cnt == n) {
            return head->next;
        }

     
        int pos = cnt - n;
        temp = head;

        for (int i = 1; i < pos; i++) {
            temp = temp->next;
        }

       
        temp->next = temp->next->next;

        return head;
    }
};