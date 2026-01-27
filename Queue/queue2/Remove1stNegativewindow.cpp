#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    int arr[] = {0,-1,-2,3,4,-5,6,4,7,-8};
    int n = sizeof(arr)/4;
    int k = 3;
    vector<int>ans;
    queue<int>q;
    for(int i=0; i<n; i++){
        if(arr[i] < 0) q.push(i);
    }
    // traverse each window
    // window range i + k is the maximum window
    int i = 0;
    while(i+k<=n){
        while(q.size()>0 && q.front() < i) q.pop();
        if(q.size() == 0 || q.front()>=i+k) ans.push_back(0);
        else ans.push_back(arr[q.front()]);
        i++;
    }
    // print original array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    // print 1st negative window array
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}