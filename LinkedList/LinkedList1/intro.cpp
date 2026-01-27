#include<bits/stdc++.h>
using namespace std;
// step 1 : Construct a Node with a value and next address
class Node{
    public : 
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    // assign a value with each node
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    // linked that node of each other
    a.next = &b;
    b.next = &c;
    c.next = &d;
    
    // traverse through head of each node pointer
    Node temp = a;
    while(temp.next != NULL){
        cout<<temp.val<<" ";
        temp =*( temp.next);
    }
    return 0;
}