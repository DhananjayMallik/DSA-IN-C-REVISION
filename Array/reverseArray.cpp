#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array element : ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int s = 0;
    int e = n-1;
    while(s <= e){
        swap(arr[s],arr[e]);
        s++,e--;
    }
    for(int i=0; i<=n-1; i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}