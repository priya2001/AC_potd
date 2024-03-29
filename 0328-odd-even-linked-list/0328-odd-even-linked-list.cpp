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
    ListNode* oddEvenList(ListNode* head) {
        
        // STORY:
        // 1-hume sbse pahle odd and even ko segragate krna hai.
        // 2-to let's two pointer to point the odd and even nodes.
        // 3-unko alag alag segregate krege.
        // 4-last mai connect kr dege odd and even ko.
        
         if (head == NULL || head->next == NULL || head->next->next == NULL)
         {
           return head;   // No need to segregate if the list has 0, 1, or 2 nodes
         }                  
        
        ListNode *odd=head;
        ListNode *even=head->next;
        ListNode *evenStart=head->next;
        
        while(even!=NULL&&even->next!=NULL)
        {
            odd->next=even->next;
            even->next=even->next->next;
            
            odd=odd->next;
            even=even->next;
        }
        
        odd->next=evenStart;
        return head;
        
    }
};