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
    
    // ------------------------------------------recursion approach---------------------------------------
//     ListNode *merge(ListNode *h1,ListNode*h2)
//     {
//         if(h1==NULL)return h2;
//         if(h2==NULL)return h1;
        
//         if(h1->val<h2->val)
//         {
//             h1->next=merge(h1->next,h2);
//             return h1;
//         }
//         else
//         {
//             h2->next=merge(h1,h2->next);
//             return h2;
//         }
//     }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // return merge(list1,list2);
        
        
        // -------------------------------------ilteration method------------------------------------------
       if(list1==NULL)return list2;
        if(list2==NULL)return list1;
        
        ListNode *ans=new ListNode(-1);   // take dummy Node ,dummy Node value is -1
        ListNode *tail=ans;
        
        // if(list1->val<list2->val)
        // {
        //     ans=list1;
        //     tail=list1;
        //     list1=list1->next;
        // }
        // else
        // {
        //     ans=list2;
        //     tail=list2;
        //     list2=list2->next;
        // }
        while(list1!=NULL&&list2) 
        {
            if(list1->val<list2->val)
            {
                tail->next=list1;
                tail=list1;
                list1=list1->next;
            }
            else
            {
                tail->next=list2;
                tail=list2;
                list2=list2->next;
            }
        }
        if(list1==NULL)
        {
            tail->next=list2;
        }
        else
        {
            tail->next=list1;
        }
        return ans->next;
    }
};