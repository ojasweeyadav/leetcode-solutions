class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        if(head == nullptr || head->next == nullptr)
            return nullptr;

        int n = 0;
        ListNode* temp = head;

        while(temp != nullptr){
            n++;
            temp = temp->next;
        }

        int mid = n / 2;

        ListNode* curr = head;

        for(int i = 0; i < mid - 1; i++){
            curr = curr->next;
        }

        curr->next = curr->next->next;

        return head;
    }
};