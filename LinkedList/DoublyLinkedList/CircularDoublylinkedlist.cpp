#include <iostream>
using namespace std;

// -------------------------------
// Node for Circular Doubly LL
// -------------------------------
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        next = prev = NULL;
    }
};

// -------------------------------
// Circular Doubly Linked List
// -------------------------------
class CDLL
{
public:
    Node *head;
    int size;

    CDLL()
    {
        head = NULL;
        size = 0;
    }

    // -------------------------------
    // Insert at HEAD
    // -------------------------------
    void insertAtHead(int val){
        Node *temp = new Node(val);
        if(head == NULL){
            head = temp;
            head->next = head;
            head->prev = head;
        }
        else{
            Node *tail = head->prev; // last node
            temp->next = head;
            head->prev = temp;
            temp->prev = tail;
            tail->next = temp;
            head = temp;
        }
        size++;
    }
    // insert At Tail
    void insertAtTail(int val){
        Node *temp = new Node(val);
        if(head == NULL){
            insertAtHead(val);
            return;
        }
        else{
            Node *tail = head->prev; // last node
            tail->next = temp;
            temp->prev = tail;
            temp->next = head;
            head->prev = temp;
        }
        size++;
    }
    // delete at head
    void deleteAtHead(){
        if(head == NULL) return;
        if(head->next == head) { // only one node
            delete head;
            head = NULL;
        } 
        else{
            Node *tail = head->prev; // last node
            Node *newHead = head->next; // new head
            tail->next = newHead;
            newHead->prev = tail;
            delete head;
            head = newHead;
        }
        size--;
    }
    // delete At Tail
    void deleteAtTail(){
        if(head == NULL) return;
        if(head->next == head) { // only one node
            delete head;
            head = NULL;
        } 
        else{
            Node *tail = head->prev;
            Node *newTail = tail->prev;
            newTail->next = head;
            head->prev = newTail;
            delete tail;
            tail = newTail;
        }
        size--;
    }
    // Display list
    void display()
    {
        if (head == NULL)
        {
            cout << "List is empty\n";
            return;
        }

        Node *temp = head;
        do
        {
            cout << temp->val << " <-> ";
            temp = temp->next;
        } while (temp != head);

        cout << "(head)\n";
    }
};

// -------------------------------
// MAIN
// -------------------------------
int main()
{
    CDLL cll;

    cll.insertAtHead(10);
    cll.insertAtHead(20);

    cll.insertAtTail(30);
    cll.insertAtTail(40);

    cll.deleteAtHead();
    cll.deleteAtTail();
    cout << "Circular Doubly Linked List : ";
    cll.display();

    return 0;
}
