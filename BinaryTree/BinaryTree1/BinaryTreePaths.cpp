#include<iostream>
#include<vector>
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
    void helper(TreeNode* root , string s, vector<string>&ans){
        if(root == NULL) return;
        // convert root->val into string
        string a = to_string(root->val);
        // if the current node is leaf node then only hit that condition
        if(root->left == NULL && root->right == NULL){
            s += a;
            ans.push_back(s);
            return;
        }
        helper(root->left , s+a + "->" , ans);
        helper(root->right , s+a + "->" , ans);
    }
     vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        helper(root,"",ans);
        return ans;
    }
};
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
    cout<<"Original Binary Tree is : ";
    display(root);

    Solution sol;
    vector<string>path = sol.binaryTreePaths(root);
    cout<<"Root to Leaf paths \n";
    for(string p : path){
        cout<<p<<endl;
    }
    return 0;
}