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
    int num;
    cout<<"Enter your  selected element : ";
    cin>>num;
    int count = 0;
    for(int i=0; i<= n-1; i++){
        if(arr[i] > num){
            count++;
        }
    }
    cout <<" The Greater number count is = " << count;
    return 0;
}