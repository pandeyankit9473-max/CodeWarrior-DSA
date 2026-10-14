class Solution {
public:
    bool check(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr)
            return true;

        if (p == nullptr || q == nullptr)
            return false;

        if (p->val != q->val)
            return false;

        return check(p->left, q->right) &&
               check(p->right, q->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == nullptr)
            return true;

        return check(root->left, root->right);
    }
};