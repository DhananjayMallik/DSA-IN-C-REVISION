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
bool isMirror(TreeNode *left , TreeNode *right){
    if(left == NULL && right == NULL) return true;
    if(left == NULL || right == NULL) return false;
    // if the left and right values are equal then only work otherwise return false
    return (left->val == right->val) &&
    isMirror(left->left , right->right) && 
    isMirror(left->right , right->left);
}
bool isSymmetric(TreeNode *root){
    if(root == NULL) return true;
    return isMirror(root->left , root->right);
}
int main(){
TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);

    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);

    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);
    if(isSymmetric(root)){
        cout<<"The Tree is Symmetric Tree"<<endl;
    }
    else{
        cout<<"Not a Symmetric tree";
    }
    return 0;
}