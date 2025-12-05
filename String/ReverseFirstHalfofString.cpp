#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter your input string : ";
    getline(cin,s);
    cout<<"Before reverse of 2nd half your string is = " << s << endl;
    // int n = s.length();
    // reverse(s.begin(), s.begin()+n/2);
    // cout<<"After reverse your string is = " << s;

    int n = s.length();
    reverse(s.begin()+n/2 , s.end());
    cout<<"After reverse your string is = " << s;
    return 0;
}