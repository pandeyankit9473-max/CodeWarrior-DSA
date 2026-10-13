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

    int dfs(TreeNode* node, int currMax){
        if(node==NULL) return 0;
        int cnt=0;
        if(node->val>=currMax){
            cnt++;
            currMax=node->val;
        }
        cnt+=dfs(node->left,currMax);
        cnt+=dfs(node->right,currMax);

        return cnt; 
       
    }

    int goodNodes(TreeNode* root) {
        return dfs(root,root->val);
    }
};