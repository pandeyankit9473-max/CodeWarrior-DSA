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
    
    unordered_map<int,int>pos;

    TreeNode* build(vector<int>& preorder, int left, int right,int& idx){
        if(left>right) return NULL;
        int val=preorder[idx++];
    
        TreeNode* root= new TreeNode(val);
        int mid=pos[val];
        root->left=build(preorder,left,mid-1,idx);
        root->right=build(preorder,mid+1,right,idx);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        pos.clear();
       
        for(int i=0;i<inorder.size();i++){
            pos[inorder[i]]=i;
        }
         int idx=0;
        return build(preorder,0,inorder.size()-1,idx);
    }
};