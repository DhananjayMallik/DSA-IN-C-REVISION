#include<iostream>
#include<climits>
using namespace std;
int MaxRowSum(int arr[][3], int i, int j){
    int max = INT_MIN;
    int rowIndex = -1;
    for(int i=0; i<3; i++){
        int sum = 0;
        for(j=0; j<3; j++){
            sum += arr[i][j];
        }
        if(sum > max){
            max = sum;
            rowIndex = i;
        }
    }
    cout<<"Maximum is = " << max<<endl;
    return rowIndex;
}
int main(){
    int arr[3][3];
    cout<<"Enter your array element";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Maximum Row Sum is = " <<MaxRowSum(arr,3,3)<<endl;



    return 0;
}