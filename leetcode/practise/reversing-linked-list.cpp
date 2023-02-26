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
        // just check if the entered linked list is an empty linked list 
        if (head == NULL) {
            return NULL;
        }
        // prev --> linked list initally pointing on NULL and is one step behind the head node 
        // curr --> pointing at head standing on the first node 
        // each time the next of current has to be inverted amd then using other pointer it has to be moved ahead.
    // next --> one step further of curr node to help for moving the head node to the next 
        ListNode *prev=NULL,*curr=head,*nex=curr->next;
        
        while (curr!=NULL)
        {
            // curr --> first work it invert the pointers direction 
            curr->next=prev;
            // now the prev location is updated to current pointer 
            prev=curr;
            // curr location is updated using nex which is one step further of curr 
            curr=nex;
            // since nex --> will be a step further of curr node so it shall reach null before curr so it will through error if the if condition is not used
            if (nex!=NULL)
            {
                nex=nex->next;    
            }
        }
        // prev will be at the last node -- becoming the head for the reseversed linked list 
        return prev;
    }
};