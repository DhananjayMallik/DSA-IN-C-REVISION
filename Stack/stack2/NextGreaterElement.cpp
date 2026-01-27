#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    int arr[] = {3,1,2,5,4,6,2,3};
    int n = sizeof(arr)/4;
    cout<<"Before finding next greate elemnet : ";
    for(int i=0; i<n; i++){
        cout<<arr[i] << " ";
    }
    // finding next greater element
    int nge[n];
    stack<int>st;
    nge[n-1] = -1;
    st.push(n-1);
    for(int i=n-2; i>=0; i--){
        while(st.size() > 0 && arr[i] >= st.top()){
            st.pop();
        }
        if(st.size() == 0) nge[i] = -1;
        else nge[i] = st.top();
        st.push(arr[i]);
    }
    cout<<"After finding next greater element : ";
    for(int i=0; i<n; i++){
        cout<<nge[i] << " ";
    }
    return 0;
}