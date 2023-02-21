// 2. Add Two Numbers
// Dificulty: Medium


// **
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        int carry = 0;
        // head is being created for the linked list since after all process l3 will be at the last but the linked list head has to be returned for acessing it .
        ListNode* head= l3;
        while (l1 && l2)
        {
            int value = l1->val+l2->val+carry;
            carry = value/10;
            l3->next = new ListNode (value%10);
            // moving all the linked list pointers to the next index
            l3 = l3->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        // two indiviual loop are written for a case when both the linked list are not of same length.
        while (l1)
        {
            int value = l1->val+carry;
            carry = value/10;
            l3->next = new ListNode (value%10);
            // moving all the linked list pointers to the next index
            l3 = l3->next;
            l1 = l1->next;
            
        }
        while (l2)
        {
            int value = l2->val+carry;
            carry = value/10;
            l3->next = new ListNode (value%10);
            // moving all the linked list pointers to the next index
            l3 = l3->next;
            l2 = l2->next;
            
        }
        // since intially we are intializing l3 with an zero hence head->next would be returned

        // since if no terms are left in l1 and l2 but yet a carry is being carried up so it also has to be returned so it will also be included in the resultant linked list 

        if (carry)
        {
            l3->next = new ListNode(carry);
        }
        return head->next;
    }
};