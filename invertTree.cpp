class Solution{
public:
    struct TreeNode{
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(x):val=x;left=NULL;right=NULL{};
    };
    TreeNode* invertTree(TreeNode* root){
        if(root==NULL)return root;
        swap(root->left,root->right)
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};