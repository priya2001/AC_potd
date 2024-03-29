/*
story:-
    1-find mid value of linked list
    2-root->left=T1
    3-root->right=T2
    4-return root
*/

class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        
        if(head==NULL)return NULL;
        
        if(head->next==NULL)
        {
            return new TreeNode(head->val);
        }
        
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *slowPrev=NULL;
        
        while(fast!=NULL&&fast->next!=NULL)
        {
            slowPrev=slow;
            slow=slow->next;
            fast=fast->next->next;
            
        }
        
        // slow hamesha mid ko hi point krega 
        
        TreeNode *root=new TreeNode(slow->val);
        slowPrev->next=NULL;
        root->left=sortedListToBST(head);
        root->right=sortedListToBST(slow->next);
        return root;
        
    }
};