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
    int target;
    cout<<"Enter your target element";
    cin>>target;
    bool flag = false;
    for(int i=0; i<=n-1; i++){
        if(arr[i] == target){
            flag = true;
        }
    }
    if(flag == true) cout<<"Found"<<endl;
        else cout<<"Not Found"<<endl;
    return 0;
}