#include<iostream>
using namespace std;

// ------------------------------
// Create a Doubly Linked List Node
// ------------------------------
class Node {
public:
    int val;        // Value stored in the node
    Node *next;     // Pointer to the next node
    Node *prev;     // Pointer to the previous node

    // Constructor to initialize a new node
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// ------------------------------
// Function to display the list
// ------------------------------
// Traverses from head → tail using next pointers
// void display(Node *head) {
//     Node *temp = head;

//     // Loop until the last node (NULL)
//     while (temp != NULL) {
//         cout << temp->val << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL\n";
// }

// ------------------------------
// Function to display the list
// ------------------------------
// Traverses from tail → head using prev pointers
void displayRev(Node *tail){
    while(tail != NULL){
        cout<<tail->val<<" -> ";
        tail = tail->prev;
    }
    cout << "NULL\n";
}
// ------------------------------
// Main Function
// ------------------------------
int main() {

    // Create 5 nodes with values
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    // ------------------------------
    // Linking nodes forward (next pointers)
    // a -> b -> c -> d -> e
    // ------------------------------
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // ------------------------------
    // Linking nodes backward (prev pointers)
    // e <- d <- c <- b <- a
    // ------------------------------
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;

    // Display the doubly linked list
    //display(a);
    displayRev(e);

    return 0;
}
