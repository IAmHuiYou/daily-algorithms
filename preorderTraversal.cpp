//用栈实现前中、后序遍历
class Solution{
pubilc:
    struct TreeNode{
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int x):val(x),left(NULL),right(NULL){}
    };

    vector<int> preorderTravelsal(TreeNode* root){
        stack<TreeNode*>st;
        vector<int>result;
        if(root==NULL)return result;
        st.push(root);
        while(!st.empty()){
            TreeNode* node=st.top();
            st.pop()
            result.push_back(node->val);
            if(node->right)st.push(node->right);
            if(node->left)st.push(node->left);
        }
        return result;
    }

    vector<int> inorderTraversal(TreeNode* root){
        vector<int> result;
        stack<TreeNode*> st;
        TreeNode*cur =root;
        while(cur!=NULL||!st.empty()){
            if(cur!=NULL){
                sy.push(cur);
                cur=cur->left;
            }else{
                cur=st.top();
                result.push_back(cur->val);
                cur=cur->right;
            }
        }
    };

    //后续：调换入栈顺序，最后反转数组
    vector<int> preorderTravelsal(TreeNode* root){
        stack<TreeNode*>st;
        vector<int>result;
        if(root==NULL)return result;
        st.push(root);
        while(!st.empty()){
            TreeNode* node=st.top();
            st.pop()
            result.push_back(node->val);
             if(node->left)st.push(node->left);
            if(node->right)st.push(node->right);
           
        }
        reverse(result.begin(),result.end());
        return result;
    }


}