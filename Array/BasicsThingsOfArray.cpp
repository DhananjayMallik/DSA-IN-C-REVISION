#include<iostream>
using namespace std;
int main(){
    // declare an array
    // int arr[3] = {1,2,3};
    // for(int i=0; i<3; i++){
    //     cout<<arr[i]<<" ";
    // }
    int num [26] , temp;
    num[0] = 100;
    num[25] = 200;
    temp = num[25];
    num[0] = temp;
    cout<<num[0] <<" " << num[25] <<endl;
    return 0;
}