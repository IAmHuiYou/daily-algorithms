class Solution{
public:
    struct TreeNode{
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int x):val(x),left(NULL),right(NULL){}
    };
    void travelsal(TreeNode* cur,vector<int>& vec){//前序遍历
        if(cur==NULL)return;
        vec.pushback(cur->val);//中
        traversal(cur->right,vec);//左
        traversal(cur->right,vec);//右
    }
    vector<int> preorderTraversal(TreeNode* root){
        vector<int>result;
        treversal(root,result);
        return result;
    }

};


//中序遍历
void travelsal(TreeNode*cur,vector<int>&vec){
    if(cur==NULL)return;
    travelsal(cur->left);
    vec.push_back(cur->val);
    travelsal(cur->right);
}

//h后序遍历
void travelsal(TreeNode*cur,vector<int>&vec){
    if(cur==NULL)return;
    travelsal(cur->left);
    travelsal(cur->right);
    vec.push_back(cur->val);
}