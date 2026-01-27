#include <iostream>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void display(TreeNode *root)
{
    if (root != NULL)
    {
        cout << root->val << " ";
        display(root->left);
        display(root->right);
    }
}
void nthLevel(TreeNode *root, int curr, int level)
{
    if (root == NULL)
        return;
    // check current level is target level which we need
    if (curr == level)
    {
        cout << root->val << " ";
        return;
    }
    // recursive call
    nthLevel(root->left, curr + 1, level);
    nthLevel(root->right, curr + 1, level);
}
int main()
{
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
    int level;
    cout << "Enter The Target Level : ";
    cin >> level;

    cout << "Nth Level Element : ";
    nthLevel(root, 1, level);
    return 0;
}