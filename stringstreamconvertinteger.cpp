#include<iostream>
#include<sstream>
using namespace std;
int main(){
    // string to integer
    string s = "123456";
    stringstream ss(s);
    int x;
    ss >> x;
    cout<<x;
    return 0;
}