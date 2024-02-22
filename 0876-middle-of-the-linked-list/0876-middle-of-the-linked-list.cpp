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
    ListNode* middleNode(ListNode* head) {
        
//         int count=0;
//         ListNode *temp=head;
//         while(temp!=NULL)
//         {
//             count++;
//             temp=temp->next;
            
//         }
        
//        int half=count/2;
//         temp=head;
//         while(half--)
//         {
//             temp=temp->next;
//         }
//         return temp;
        
// ------------------------------- without finding athe length-----------------------------------
        
/* in this approach take two pointe fast & slow like fast=2x slow=x, i mean fast cover 2 step and slow is cover 
half of fast in this situation fast reached in end of node or slow cover mid of node;*/
        
        ListNode *slow=head,*fast=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};