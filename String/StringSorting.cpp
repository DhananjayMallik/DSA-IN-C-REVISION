#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter your original string : ";
    getline(cin,s);
    sort(s.begin() , s.end());
    cout<<"After sorting " << s;

    return 0;
}