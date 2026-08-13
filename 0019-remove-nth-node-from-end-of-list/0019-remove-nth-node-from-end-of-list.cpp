class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // Step 1: Count total nodes
        ListNode* temp = head;
        int count = 0;

        while(temp != NULL) {
            count++;
            temp = temp->next;
        }

        // Step 2: Find position from beginning
        int steps = count - n;

        // If first node has to be removed
        if(steps == 0) {
            return head->next;
        }

        // Step 3: Go to node just before the node to delete
        temp = head;

        for(int i = 1; i < steps; i++) {
            temp = temp->next;
        }

        // Step 4: Delete the node
        temp->next = temp->next->next;

        return head;
    }
};