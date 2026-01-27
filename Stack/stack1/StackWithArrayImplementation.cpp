#include<iostream>
using namespace std;

class Stack {
public:
    int arr[5];
    int idx;

    Stack() {
        idx = -1;
    }

    void push(int val){
        // is stack full
        if(idx == 4){
            cout<<"Stack is full";
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop(){
        if(idx == -1){
            cout<<"Stack is empty";
            return;
        }
        idx--;
    }
    int top(){
        // if stack will not contain any element
        if(idx == -1){
            cout<<"Stack is empty";
            return -1;
        }
        // other return the value of that index
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
    void display(){
        for(int i=0; i<=idx; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main() {
    Stack st;   // ✔ Use your class

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << "Size: " << st.size() << endl;
    cout << "Top: " << st.top() << endl;

    cout << "Stack contents: ";
    st.display();

    return 0;
}
