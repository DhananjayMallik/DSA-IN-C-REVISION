#include<iostream>
using namespace std;
void ColWiseSum(int arr[][3], int i, int j){
    for(j=0; j<3; j++){
        int sum = 0;
        for(i=0; i<3; i++){
            sum += arr[i][j];
        }
        cout<<"Column Wise Sum is = " << sum<<endl;
    }
}
int main(){
    int arr[3][3];
    cout<<"Enter the array element";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    ColWiseSum(arr,3,3);
    return 0;
}