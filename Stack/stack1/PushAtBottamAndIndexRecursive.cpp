#include<iostream>
#include<stack>
using namespace std;
// display stack using resursion
void displayRev(stack<int>&st){
    if(st.size() == 0) return;
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    displayRev(st);
    st.push(x);
}
void PushAtBottamRec(stack<int>&st , int val){
    if(st.size() == 0){
        st.push(val);
        return;
    }
    // get top of the stack 
    int x = st.top();
    st.pop();
    PushAtBottamRec(st,val);
    st.push(x);
}
void reverse(stack<int>&st){
    if(st.size() == 1){
        return;
    }
    int x = st.top();
    st.pop();
    reverse(st);
    PushAtBottamRec(st,x);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    displayRev(st);
    cout<<endl;
    PushAtBottamRec(st,70);
    displayRev(st);
    reverse(st);
    displayRev(st);
    return 0;
}