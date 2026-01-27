#include<iostream>
#include<queue>
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
void levelOrder(TreeNode *root){
    queue<TreeNode*>q;
    q.push(root);
    while(q.size() > 0){
        TreeNode *temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->right) q.push(temp->right);
        if(temp->left) q.push(temp->left);
    }
    cout<<endl;
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
    cout<<"Level Order Traversal Using Queue : ";
    levelOrder(root);
    return 0;
}