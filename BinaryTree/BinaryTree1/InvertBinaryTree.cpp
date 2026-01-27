#include<iostream>
using namespace std;
class TreeNode{
    public : 
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
TreeNode *invertBinaryTree(TreeNode *root){
    if(root == NULL) return NULL;
    TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;
    invertBinaryTree(root->left);
    invertBinaryTree(root->right);
    return root;
}
void display(TreeNode *root){
    if(root != NULL){
        cout<<root->val<<" ";
        display(root->left);
        display(root->right);
    }
}
int main(){
    // construct a binary tree
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    // print that binary tree
    cout<<"Original Binary Tree is : ";
    display(root);
   cout<<endl;
   invertBinaryTree(root);
   cout<<"After Invert The Binary Tree is : ";
   display(root);
    return 0;
}