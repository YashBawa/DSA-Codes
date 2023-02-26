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

//  easy -- we are storing the node which is same and then freeing it later on using delete keyword 
// moving the pointer to the next of the deleted node 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp = head;

        while (temp!= NULL && temp->next!=NULL)
        {
            if (temp->val == temp->next->val)
            {
                 ListNode *del = temp->next;
                 temp->next=del->next;
                 delete(del);
            }
            else 
            {
                temp = temp->next;
            }
        }
        return head;
    }
};