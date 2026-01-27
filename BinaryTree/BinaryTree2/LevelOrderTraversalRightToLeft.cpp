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
    if(root != NULL){
        cout<<root->val<<" ";
        display(root->left);
        display(root->right);
    }
}
int levels(TreeNode *root){
    if(root == NULL) return 0;
    return 1 + max(levels(root->left) , levels(root->right));
}
void nthLevel(TreeNode *root , int curr , int level){
    if(root == NULL) return;
    if(curr == level) {
        cout<<root->val << " ";
        return;
    }
    nthLevel(root->right , curr+1, level);
     nthLevel(root->left , curr+1 ,level);
}
void levelOrderRToL(TreeNode *root , int curr , int level){
    // find out how many level
    int n = levels(root);
    for(int i=1; i<=n; i++){
        nthLevel(root , 1 , i);
    }
}
int main(){
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    cout << "Original Binary Tree : ";
    display(root); 
    cout << endl;
    
    levelOrderRToL(root , 1 , 3);
    return 0;
}