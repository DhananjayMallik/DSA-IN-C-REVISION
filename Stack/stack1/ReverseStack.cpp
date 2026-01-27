#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>&st){
    stack<int>gt;
    while(st.size() > 0){
        gt.push(st.top());
        st.pop();
    }
    while(gt.size() > 0){
        cout << " The stack : " << gt.top() << endl;
        st.push(gt.top());
        gt.pop();
    }
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    
    // reverse the stack
    stack<int>gt;
    while(st.size() > 0){
        gt.push(st.top());
        st.pop();
    }
    stack<int>rt;
    while(gt.size() > 0){
        rt.push(gt.top());
        gt.pop();
    }
    while(rt.size() > 0){
        st.push(rt.top());
        rt.pop();
    }
    cout<<endl;
    print(st);
    return 0;
}
