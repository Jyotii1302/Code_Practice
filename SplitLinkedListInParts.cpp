class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> result(k, nullptr); 
        int length = 0;
        ListNode* temp = head;

        while (temp) {
            length++;
            temp = temp->next;
        }


        int baseSize = length / k; 
        int extraNodes = length % k; 

        ListNode* curr = head;
        ListNode* prev = nullptr;


        for (int i = 0; i < k; i++) {
            result[i] = curr;  
            int partSize = baseSize;
            
            if (i < extraNodes) {
                partSize += 1;  
            }


            for (int j = 0; j < partSize; j++) {
                prev = curr;
                if (curr) curr = curr->next;
            }
            if (prev) prev->next = nullptr;
        }

        return result;
    }
};

