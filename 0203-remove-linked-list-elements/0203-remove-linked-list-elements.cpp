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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode *temp=new ListNode(0);
        temp->next=head;
        ListNode *cur=temp;
        while(cur->next!=NULL)
        {
            if(cur->next->val==val)
            {
                cur->next=cur->next->next;
            }
            else
            {
                cur=cur->next;
            }
        }
        return temp->next;
     
    }
};