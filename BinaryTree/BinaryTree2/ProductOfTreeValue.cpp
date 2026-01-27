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
int productOfTree(TreeNode *root){
    if(root == NULL) return -1;
    int LST = productOfTree(root->left);
    int RST = productOfTree(root->right);
    return root->val * (LST * RST);
}
int main(){
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    cout<<"Product of that Binary tree is : " << productOfTree(root);
    return 0;
}