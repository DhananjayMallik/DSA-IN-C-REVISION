    #include <iostream>
using namespace std;

// Definition of TreeNode
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int maxDia = 0;

    // function to calculate height of subtree
    int levels(TreeNode *root){
        if(root == NULL) return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }

    // function to calculate diameter
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;

        int dia = levels(root->left) + levels(root->right);
        maxDia = max(dia, maxDia);

        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);

        return maxDia;
    }
};

int main() {
    /*
           Example Tree:
                 1
               /   \
              2     3
             / \
            4   5
           /
          6
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->left->left->left = new TreeNode(6);

    Solution sol;
    int diameter = sol.diameterOfBinaryTree(root);

    cout << "Diameter of the tree: " << diameter << endl;

    return 0;
}
