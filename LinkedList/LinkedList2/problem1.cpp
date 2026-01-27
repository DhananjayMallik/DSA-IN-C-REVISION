#include<bits/stdc++.h>
using namespace std;
class Node{
    public : 
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int searchInLinkedList(Node *head , int k){
    Node *temp = head;
    while(temp != NULL){
        if(temp->val == k){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}
int main(){
    Node *a = new Node(3);
    Node *b = new Node(6);
    Node *c = new Node(2);
    Node *d = new Node(7);
    Node *e = new Node(9);
    Node *f = new Node(5);
    Node *g = new Node(1);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    
    int k;
    cout<<"Enter value of that you want to search here : ";
    cin>>k;
    cout<<"Value preent : " << searchInLinkedList(a,k);
    return 0;   
}