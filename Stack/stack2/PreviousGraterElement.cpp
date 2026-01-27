#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    int arr[] = {3,1,2,5,4,6,2,3};
    int n = sizeof(arr)/4;
    cout<<"Before Finding previous greater element : ";
    for(int i=0; i<n; i++){
        cout<<arr[i] << " ";
    }
    // finding previous greater element
    int pge[n];
    stack<int>st;
    pge[0] = -1;
    st.push(arr[0]);
    for(int i=1; i<n; i++){
        while(st.size() > 0 && arr[i] >= st.top()){
            st.pop();
        }
        if(st.size() == 0) pge[i] = -1;
        else pge[i] = st.top();
        st.push(arr[i]);
    }
    cout<<"After finding previous greater element : ";
    for(int i=0; i<n; i++){
        cout<<pge[i] << " ";
    }
    return 0;
}