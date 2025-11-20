#include<iostream>
using namespace std;
bool boolIsPresent(int arr[][3], int target, int i, int j){
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int target;
    cout<<"Enter your target which one you search : ";
    cin>>target;
    if(boolIsPresent(arr,target,3,3)){
        cout<<"Element Searched!";
    } else{
        cout<<"Not Found!";
    }
    return 0;
}