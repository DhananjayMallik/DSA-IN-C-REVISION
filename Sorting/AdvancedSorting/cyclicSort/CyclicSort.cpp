#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];
    cout<<"Enter the array element";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Before Sorting : " << endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // cyclic sort
    int i=0;
    while(i<n){
        int correctIdx = arr[i]-1;
        if(i==correctIdx) i++;
        else swap(arr[i], arr[correctIdx]);
    }
    cout<<"After Sorting : " << endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}