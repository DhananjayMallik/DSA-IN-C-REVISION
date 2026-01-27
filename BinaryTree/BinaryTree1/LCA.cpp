// find the lowest common ancestor ----> 
#include<bits/stdc++.h>
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
    bool exist(TreeNode *root , TreeNode *target){
        if(root == NULL) return false;
        if(root == target) return true;
        return exist(root->left,target) || exist(root->right,target);
    }
    TreeNode *LCA(TreeNode *root , TreeNode*p , TreeNode *q){
        if(root == p || root == q) return root;
        // if p present inleft and q is right
        else if(exist(root->left,p) && exist(root->right,q)) return root;
        else if(exist(root->right,p) && exist(root->left,q)) return root;
        else if(exist(root->left,p) && exist(root->left,q)) return LCA(root->left ,p , q);
        return LCA(root->right , p , q);
    }
};
int main(){
    // Creating your tree:
    //
    //         1
    //      /     \
    //     2       3
    //   /  \     / \
    //  4    5  10  11
    // / \   / \
    //6  7  8  9
    //

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(10);
    root->right->right = new TreeNode(11);

    root->left->left->left = new TreeNode(6);
    root->left->left->right = new TreeNode(7);

    root->left->right->left = new TreeNode(8);
    root->left->right->right = new TreeNode(9);

    // p = 8 , q = 10
    TreeNode* p = root->left->left->left;   // 6
    TreeNode* q = root->left->left->right;  // 7
    
    Solution sol;
    TreeNode *ans = sol.LCA(root,p,q);
    if(ans){
        cout<<"LCA of " << p->val <<" and " << q->val <<" is " << " = " << ans->val<<endl;
    }
    else cout<<"LCA not found";
    return 0;
}