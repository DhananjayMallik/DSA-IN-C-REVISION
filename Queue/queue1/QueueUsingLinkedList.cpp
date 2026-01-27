#include<iostream>
#include<queue>
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
class Queue{
    public : 
    Node *head;
    Node *tail;
    int s;
    Queue(){
        head = tail = NULL;
        s = 0;
    }
    void push(int val){
        Node *temp = new Node(val);
        if(s == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        s++;
    }
    void pop(){
        if(s == 0){
            cout<<"Queue is empty";
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        s--;
    }
    int front(){
        if(s == 0){
            cout<<"Queue is empty";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(s == 0){
            cout<<"Queue is empty";
            return -1;
        }
        return tail->val;
    }
    int size(){
        return s;
    }
    void display(){
        Node *temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.display();
    q.pop();
    q.display();
    cout<<"Front is : " << q.front()<<endl;
    cout<<"Back is : " << q.back()<<endl;
    cout<<"Size of the queue is : " << q.size();
    return 0;
}