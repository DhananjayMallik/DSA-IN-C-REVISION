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
void display(TreeNode *root){
    if(root!=NULL){
        cout<<root->val<<" ";
        display(root->left);
        display(root->right);
    }
}
void inorder(TreeNode *root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
int main(){
   TreeNode* root = new TreeNode(1);

root->left = new TreeNode(2);
root->right = new TreeNode(3);

root->left->left = new TreeNode(4);
root->left->right = new TreeNode(5);

root->right->left = new TreeNode(6);
root->right->right = new TreeNode(7);

cout<<"Original Binary Tree : ";
    display(root);
cout<<endl;
cout<<"Inorder Traversal : ";
    inorder(root);
    return 0;
}