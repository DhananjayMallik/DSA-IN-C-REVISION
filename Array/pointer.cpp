#include<iostream>
using namespace std;
int main(){
    // int a = 5;
    // int *ptr = &a;
    // cout << ptr;
    //cout<<(*ptr); // print value of a = 5;
    int x = 4;
    int *p1 = &x;
    int y = 9;
    int *p2 = &y;
     x = 122;
    int *ptr = &x;
    cout << (*ptr);
    return 0;
}