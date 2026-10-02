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

    bool isSametree(TreeNode* root, TreeNode* subroot){
        if(root==nullptr && subroot==nullptr) return true;
        if(root==nullptr || subroot==nullptr) return false;
        if(root->val!=subroot->val) return false;
        return isSametree(root->left, subroot->left) &&
            isSametree(root->right , subroot->right );
    }

    bool isSubtree(TreeNode* root, TreeNode* subroot) {

        if (root == nullptr)
            return false;
        if(isSametree(root,subroot)) return true;
        
        return isSubtree(root->left,subroot)|| isSubtree(root->right,subroot);

    }
};