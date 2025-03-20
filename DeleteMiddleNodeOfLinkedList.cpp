class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == nullptr)return nullptr;

        ListNode* slow= head;
        ListNode* fast= head ->next;

        while(fast->next != nullptr && fast->next->next != nullptr){
            fast= fast->next->next;
            slow= slow->next;
        }
        slow->next= slow->next->next;
        return head;
    }
};
