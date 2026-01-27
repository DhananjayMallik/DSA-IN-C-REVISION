#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> st;

    cout << "Before putting element on the stack, size: " << st.size() << endl;

    // pushing elements
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    cout << "After putting elements, size: " << st.size() << endl;
    cout << "Top of the stack: " << st.top() << endl;

    st.pop(); // pop does not return value
    cout << "After pop, new top: " << st.top() << endl;
    cout << "After popping, size: " << st.size() << endl;
    // print the element of the stack --> entire stack empty
    // while(st.size() > 0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // without empty the entire stack --> using extra stack
    stack<int>gt;
    while(st.size() > 0){
        gt.push(st.top());
        st.pop();
    }
    // get back that element from stack st
    while(gt.size() > 0){
        cout<<gt.top()<<" ";
        st.push(gt.top());
        gt.pop();
    }
    return 0;
}
