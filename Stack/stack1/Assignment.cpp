/* question 1 :  Remove kth element from top in the given stack */
#include<bits/stdc++.h>
#include<stack>
using namespace std;
void print(stack<int>&st){
    stack<int>gt;
    while(st.size() > 0){
        gt.push(st.top());
        st.pop();
    }
    cout<<"Before deleted element : ";
    while(gt.size() > 0){
        cout<<gt.top()<<" ";
        st.push(gt.top());
        gt.pop();
    }
    cout<<endl;
}
void removeKth(stack<int>&st, int k){
    // base caseor edge case when k = 1
    if(k == 1){
        st.pop();
        return;
    }
    int topElement = st.top();
    st.pop();
    removeKth(st, k-1); // recursive call to the remaining stack element
    st.push(topElement);
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    print(st);
    int k;
    cout<<"Enter that number you want to delete : ";
    cin>>k;
    removeKth(st,k);
    print(st);
    return 0;
}