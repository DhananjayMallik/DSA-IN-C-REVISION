#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>&q){
    int n = q.size();
    for(int i=1; i<=n; i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reverseKthElement(int k, queue<int>&q){
    // step 1 : push kth element into stack
    stack<int>st;
    for(int i=1; i<=k; i++){
        st.push(q.front());
        q.pop();
    }
    // after that empty that stack till kth element pushed into queue
    while(st.size() > 0){
        q.push(st.top());
        st.pop();
    }
    // reverse and push into queue 
    int n = q.size();
    for(int i=1; i<=n-k; i++){
        q.push(q.front());
        q.pop();
    }
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout<<"Before Reverse : ";
    display(q);
    int k = 2;
    reverseKthElement(k,q);
    cout<<"After Reverse : ";
    display(q);


}