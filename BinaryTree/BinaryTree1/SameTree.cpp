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
class Solution{
    public :
    bool isSameTree(TreeNode *p , TreeNode *q){
        if(p==NULL && q==NULL) return true;
        else if(p==NULL && q!=NULL) return false;
        else if (p!=NULL && q==NULL) return false;
        else if(p->val != q->val) return false;
        bool leftSubTree = isSameTree(p->left , q->left);
        if(leftSubTree == false) return false;
        bool rightSubTree = isSameTree(p->right , q->right);
        if(rightSubTree == false) return false;
        return true;
    }
};
int main(){
    // first tree
    TreeNode *p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);
    // second tree
    TreeNode *q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(3);
    // object declare
    Solution sol;
    if(sol.isSameTree(p,q)){
        cout<<"Two Tree Both are same"<<endl;
    }
    else cout<<"Both are not same";
    return 0;
}