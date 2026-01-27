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
// Function returns height if balanced, else -1
int checkHeight(TreeNode *root){
     if(root == NULL) return 0;
     int LSTheight = checkHeight(root->left); // left subtree height
     if(LSTheight == -1) return -1;
     int RSTHeight = checkHeight(root->right); // right subtree height
     if(RSTHeight == -1) return -1;
     if (abs(LSTheight - RSTHeight) > 1) return -1;
     return 1 + max(LSTheight , RSTHeight);
}
bool isBalanced(TreeNode *root){
    return checkHeight(root) != -1;
}
int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->left->left = new TreeNode(5);
    if(isBalanced(root)){
        cout<<"Binary Tree is Balanced"<<endl;
    }
    else{
        cout<<"Binary Tree is not Balanced";
    }
    return 0;
}