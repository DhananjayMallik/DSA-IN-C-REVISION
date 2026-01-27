#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
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
 vector<vector<int>> zigzagLevelOrder(TreeNode *root){
    if(root == NULL) return {};
    queue<TreeNode*>q;
    q.push(root);
    vector<vector<int>>ans;
    while(q.size()){
        int n = q.size();
        vector<int>temp;
        for(int i=0; i<n; i++){
            TreeNode *t = q.front();
            q.pop();
            temp.push_back(t->val);
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }
        // if the temp vector size is odd type then only reverse
        if(ans.size() % 2 == 1){
            reverse(temp.begin() , temp.end());
        }
        ans.push_back(temp);
    }
    return ans;
 }
int main(){
     // Create the tree [3,9,20,null,null,15,7]
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    vector<vector<int>> result = zigzagLevelOrder(root);

    cout << "Zigzag Level Order Traversal:\n";
    for (auto level : result) {
        for (auto x : level) cout << x << " ";
        cout << endl;
    }
    return 0;
}