/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        //create the queue for store the value in level(node)
        queue<TreeNode*>q;

        q.push(root);

        while(!q.empty())
        {
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++)
            {
                TreeNode *node=q.front(); // Get the front node in the queue
                q.pop(); // Remove the front node from the queue
                level.push_back(node->val);
                
                if(node->left!=NULL)// Enqueue the child nodes if they exist
                {
                    q.push(node->left);
                }
                if(node->right!=NULL)
                {
                    q.push(node->right);
                }
            }  
            // Store the current level in the answer vector
            ans.push_back(level);
        }
        return ans;
    }
};