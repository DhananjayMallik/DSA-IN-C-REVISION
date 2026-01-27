#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val) {
        this->val = val;
        next = prev = NULL;
    }
};

class Dequeue {
public:
    Node *head;
    Node *tail;
    int s;

    Dequeue() {
        head = tail = NULL;
        s = 0;
    }

    // Insert at back
    void push_back(int val) {
        Node *temp = new Node(val);
        if (s == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        s++;
    }

    // Insert at front
    void push_front(int val) {
        Node *temp = new Node(val);
        if (s == 0) {
            head = tail = temp;
        } else {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        s++;
    }

    // Remove from front
    void pop_front() {
        if (s == 0) {
            cout << "List is empty\n";
            return;
        }

        // Only one node
        if (s == 1) {
            delete head;
            head = tail = NULL;
            s = 0;
            return;
        }

        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        s--;
    }

    // Remove from back
    void pop_back() {
        if (s == 0) {
            cout << "List is empty\n";
            return;
        }

        // Only one node
        if (s == 1) {
            delete head;
            head = tail = NULL;
            s = 0;
            return;
        }

        Node *temp = tail; // store the last node
        tail = tail->prev; // move tail backward
        tail->next = NULL; // connect with null
        delete temp; // delete null
        s--; // decrease the size of the LL
    }

    // Display queue
    void display() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Dequeue dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_back(5);
    dq.display();

    dq.push_front(6);
    dq.push_front(7);
    dq.push_front(8);
    dq.display();

    dq.pop_front();
    dq.pop_front();
    dq.display();

    dq.pop_back();
    dq.display();

    return 0;
}
