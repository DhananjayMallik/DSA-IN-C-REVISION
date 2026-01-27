#include<iostream>
#include<climits>
using namespace std;
class Node{
    public : 
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void display(Node *root){
    if(root != NULL){
        cout<<root->val<<" ";
        display(root->left);
        display(root->right);
    }
}
int sumofTreeNode(Node *root){
    if(root == NULL) return 0;
    return root->val+sumofTreeNode(root->left) + sumofTreeNode(root->right);
}
int size(Node *root){
    if(root == NULL) return 0;
    return 1+size(root->left) + size(root->right);
}
int max(Node *root){
    if(root == NULL) return 0;
    int left = max(root->left);
    int right = max(root->right);
    return max(root->val , max(left,right));
}
int min(Node *root){
    if(root == NULL) return INT_MAX;
    int left = min(root->left);
    int right = min(root->right);
    return min(root->val , (left,right));
}
int level(Node *root){
    if(root == NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
int main(){
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);
    // connect the node to each other
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    display(a);
    cout<<endl;
    cout<<"Sum of The Tree is : " << sumofTreeNode(a) << endl;
    cout<<"Size of the Binary Tree is : " << size(a) << endl;
    cout<<"Maximum Node in the given Binary Tree is : " << max(a)<< endl;
    cout<<"Minimum Node in the given Binary Tree is : " << min(a)<<endl;
    cout<<"Level of the Binary Tree is : " << level(a);
    return 0;
}