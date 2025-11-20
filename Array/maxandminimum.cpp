#include<iostream>
#include<climits>
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
    int max = INT_MIN;
    for(int i=0; i<=n-1; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
     int min = INT_MAX;
    for(int i=0; i<=n-1; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
     cout<< "Maximum Element is = " << max << endl;
    cout<< "Minimum Element is = " << min << endl;

    return 0;
}