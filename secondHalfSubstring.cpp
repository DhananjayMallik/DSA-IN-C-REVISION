#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Dhananjay";
    int n = s.length();
    cout<<s.substr(n/2);
    return 0;
}