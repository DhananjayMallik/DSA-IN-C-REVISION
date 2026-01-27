#include<iostream>
#include<stack>
using namespace std;
// construct a node
class Node{
    public : 
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next =  NULL;
    }
};
// define a stack
class Stack{
    public : 
    Node *head;
    int sz;
    Stack(){
        head = NULL;
        sz = 0;
    }
    // pushing an element into linked list
    void push(int val){
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        sz++;
    }
    // popping element into the linked list
    void pop(){
        // check head element
        if(head == NULL){
            cout<<"Stack is empty";
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        sz--;
    }
    // get the head element
    int top(){
        if(head == NULL){
            cout<<"Stack is empty";
            return -1;
        }
        return head->val;
    }
    void displayRec(Node *temp){
        if(temp == NULL) return;
        displayRec(temp->next);
        cout<<temp->val<<" ";
    }
    void display(){
        displayRec(head);
    }
    int size(){
        return sz;
    }
};
int main(){
    Stack st;

    cout << "Top: " << st.top() << endl;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << "Top: " << st.top() << endl;
    cout << "Size: " << st.size() << endl;

    st.pop();
    cout << "After pop, Top: " << st.top() << endl;

    st.display();
    
    return 0;
}