#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        this->val = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

//PreOrder
void PreOrder(TreeNode* root){
    if(root == NULL){
        return;
    }

    cout<<root->val<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

//PreOrder Iterative
void PreOrder(TreeNode* root){
    stack<TreeNode*> st;
    st.push(root);

    while(!st.empty()){
        auto it = st.top();
        st.pop();

        cout<<it->val<<" ";

        if(it->right != nullptr){
            st.push(it->right);
        }

        if(it->left != nullptr){
            st.push(it->left);
        }
    }
}

int main(){

    return 0;
}