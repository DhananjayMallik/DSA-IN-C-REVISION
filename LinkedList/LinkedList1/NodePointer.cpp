#include<bits/stdc++.h>
using namespace std;
// Construct a Node -->
class Node{
    public : 
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void display(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
int main(){
    // value assign through node pointer --->
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    // Connect them to each other through node pointer --->
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    // display the value of each node -->
    display(a);
    return 0;
}