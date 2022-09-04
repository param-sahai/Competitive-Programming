class Solution {
public:
    int count=0;
    void preOrderTraversal(TreeNode *root, int prev){
        if(root==nullptr)
        return;
        if(root->val >= prev)
        count++;
        prev = max(prev, root->val);
        preOrderTraversal(root->left, prev);
        preOrderTraversal(root->right, prev);
    }
    int goodNodes(TreeNode* root) {
        if(root==nullptr)
        return 0;
        else{
            int prev = root->val;
            preOrderTraversal(root, prev);
            return count;
        }
    }
};