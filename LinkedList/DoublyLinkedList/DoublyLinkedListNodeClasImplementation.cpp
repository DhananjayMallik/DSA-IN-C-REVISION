#include <iostream>
using namespace std;

// --------------------------------------
// Node of Doubly Linked List
// --------------------------------------
class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};

// --------------------------------------
// Doubly Linked List Class
// --------------------------------------
class DLL
{
public:
    Node *head;
    Node *tail;
    int size;

    DLL()
    {
        head = tail = NULL;
        size = 0;
    }

    // --------------------------------------
    // Insert a new node at the beginning
    // --------------------------------------
    void insertAtHead(int val)
    {
        Node *temp = new Node(val);

        // If list is empty
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head; // connect new node to current head
            head->prev = temp; // connect current head back to new node
            head = temp;       // move head to new node
        }

        size++;
    }

    // --------------------------------------
    // Insert a new node at the beginning
    // --------------------------------------
    void insertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val)
    {
        if (idx < 0 || idx > size)
        {
            cout << "Invalid index!!\n";
            return;
        }

        if (idx == 0)
        {
            insertAtHead(val);
            return;
        }

        if (idx == size)
        {
            insertAtTail(val);
            return;
        }

        Node *t = new Node(val);
        Node *temp = head;
        for (int i = 0; i < idx - 1; i++)
        {
            temp = temp->next;
        }
        t->next = temp->next;
        temp->next = t;
        t->prev = temp;
        t->next->prev = t;
        size++;
    }
    void deleteAtHead(){
        if(size == 0){
            cout<<"List is empty";
            return;
        }
        Node *temp = head;
        if(size == 1) head = tail = NULL;
        else{
            head = head->next;
            head->prev = NULL;
        }
        delete temp;
        size--;
    }
    void deleteAtTail(){
         if(size == 0){
            cout<<"List is empty";
            return;
        }
        Node *temp = tail->prev;
        temp->next = NULL;
        size--;
    }
    void deleteAtIdx(int idx){
        if (idx < 0 || idx > size)
        {
            cout << "Invalid index!!\n";
            return;
        }

        if (idx == 0)
        {
            deleteAtHead();
            return;
        }

        if (idx == size)
        {
            deleteAtTail();
            return;
        }
        Node *temp = head;
        for(int i=0; i<idx-1; i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        temp->next->prev = temp;
        size--;
    }
    // --------------------------------------
    // Display the linked list
    // --------------------------------------
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

// --------------------------------------
// Main Function
// --------------------------------------
int main()
{
    DLL ll;

    ll.insertAtHead(10);
    ll.display();

    ll.insertAtHead(20);
    ll.display();

    ll.insertAtHead(30);
    ll.display();

    ll.insertAtHead(40);
    ll.display();

    ll.insertAtTail(50);
    ll.display();

    ll.insertAtTail(60);
    ll.display();

    ll.insertAtIdx(2, 70);
    ll.display();

    ll.deleteAtHead();
    ll.display();

    ll.deleteAtTail();
    ll.display();

    ll.deleteAtIdx(2);
    ll.display();
    return 0;
}
