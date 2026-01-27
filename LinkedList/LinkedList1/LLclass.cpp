#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList
{
    public : 
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0){
            head = tail = temp;
        } 
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node *temp = new Node(val);
        if(size==0){
            head = tail = temp;
        }
        else{
            temp->next = head; // connect with new node with my current head
            head = temp; // update the head pointer
        }
        size++;
    }
    void insertAtIdx(int idx , int val){
        if(idx < 0 || idx > size) {
            cout<<"Invalid List";
            return;
        }
        if(idx == 0) {
            insertAtHead(val);
            return;
        }
        if(idx == size) {
            insertAtTail(val);
            return;
        }
        else{
            Node *t = new Node(val);
            Node *temp = head;
            for(int i=0; i<idx-1; i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    void deleteAtHead(){
        Node *temp = head;
        if(size==1) {
            head = tail = temp;
            size--;
        }
        else{
            head = head->next;
        }
        delete temp;
        size--;
    }
    void deleteAtTail(){
        Node *temp = head;
        if(size == 1){
            head = tail = temp;
            size--;
        }
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        temp = tail;
        size--;
    }
    void deleteAtIdx(int idx){
        Node *temp = head;
        if(idx<0 || idx>size){
            cout<<"Invalid list";
            return;
        }
        if(idx==0){
            deleteAtHead();
            return;
        }
        if(idx == size){
            deleteAtTail();
            return;
        }
        for(int i=0; i<idx-1; i++){
            temp = temp->next;
        }
        temp -> next = temp->next->next;
        size--;
    }
    void display(){
        Node *temp = head;
        while(temp != NULL){
            cout<<temp->val<< " -> ";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }
};
int main()
{
       LinkedList ll;
       ll.insertAtTail(10);
       ll.display();
       ll.insertAtTail(20);
       ll.display();
       ll.insertAtTail(30);
       ll.display();
       ll.insertAtTail(40);
       ll.display();
       ll.insertAtHead(60);
       ll.display();
       ll.insertAtIdx(2,70);
       ll.display();
       ll.deleteAtHead();
       ll.display();
       ll.deleteAtTail();
       ll.display();
       ll.deleteAtIdx(1);
       ll.display();
    return 0;
}