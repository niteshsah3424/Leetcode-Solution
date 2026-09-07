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
    bool isPalindrome(ListNode* head) {
   ListNode* newnode = NULL;
   ListNode* temp = head;
 
while (temp != NULL)
{
    int value = temp->val;
 
    ListNode* temp1 =new ListNode(value);
    temp1->next = newnode;
    newnode = temp1;
 
    temp = temp->next;
}
 
ListNode* ptr = head;
 
while (ptr != NULL)
{
    if (ptr->val != newnode->val)
    {
        return false;
    }
 
    newnode = newnode->next;
    ptr = ptr->next;
}
 
return true;
       

    }
};