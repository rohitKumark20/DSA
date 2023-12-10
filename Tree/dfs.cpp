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
void PreOrderIter(TreeNode* root){
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

//Inorder
void inorder(TreeNode* root){
    if(root == nullptr) return;

    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

//Inorder iterative;
void inorderIter(TreeNode* root){
    stack<TreeNode*> st;
    TreeNode* curr = root;

    while(true){
        if(curr!=nullptr){
            st.push(curr);
            curr = curr->left;
        }else{
            if(st.empty()) break;
            auto it = st.top();
            st.pop();
            cout<<it->val<<" ";
            curr = it->right;
        }
    }
}

int main(){

    return 0;
}