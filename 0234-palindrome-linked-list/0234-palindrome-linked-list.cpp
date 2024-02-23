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
    
    //this is function for revese the list but only reverse previous of mid (slow->next)
    ListNode *reverseList(ListNode *head)
    {
        if(head==NULL)return NULL;
        ListNode *prev=NULL,*cur=head,*n=head->next;
        while(cur!=NULL)
        {
            cur->next=prev;
            prev=cur;
            cur=n;
            if(n!=NULL)n=n->next;
        }
        return prev;
    }
    
    void print(ListNode *head)
    {
       while(head!=NULL)
       {
         head=head->next;
       }
        
    }
    bool isPalindrome(ListNode* head) {
        
//         firstly linked list break two part by using slow faast approach
        ListNode *slow=head,*fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverseList(slow->next);
        //check the half reverseList or starting linkedlist  value not match then return false otherwise true
        ListNode *start=head,*mid=slow->next;
        while(mid!=NULL)
        {
            if(mid->val!=start->val)return false;
            start=start->next;
            mid=mid->next;
        }
        // print head 
        print(head);
        return true;
        
    }   
};