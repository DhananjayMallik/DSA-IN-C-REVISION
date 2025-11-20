#include<iostream>
using namespace std;
void RowWiseSum(int arr[][3] , int i, int j){
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        cout<<"RowWise Sum is = " << sum << endl;
    }
}
int main(){
    int arr[3][3];
    cout<<"Enter the array element"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    RowWiseSum(arr,3,3);
    return 0;
}