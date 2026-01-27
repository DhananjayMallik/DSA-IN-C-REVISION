#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    int arr[]={100,80,60,81,70,60,75,85};
        int n = sizeof(arr)/4;
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        // finding previous greater element
        int pge[n];
        stack<int>st;
        pge[0] = 1;
        st.push(0);
        for(int i=1; i<n; i++){
            // pop
            while(!st.empty() > 0 && arr[i] >=arr[ st.top()]){
                st.pop();
            }
            // ans
            if(st.size() == 0) pge[i] = -1;
            else pge[i] = st.top();
            // span
            pge[i] = i-pge[i];
            st.push(i);
        }
        for(int i=0; i<n; i++){
            cout<<pge[i]<<" ";
        }
    return 0;
} 