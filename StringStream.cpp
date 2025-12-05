
#include<iostream>
#include<sstream>
using namespace std;
int main(){
    // convert number --> string using string stream class

    // int x = 1234;
    // stringstream ss;
    // ss << x;  // write number to stream
    // string str = ss.str();
    // cout<<str;

    // convert string --> number
    // string s = "456";
    // stringstream ss(s);
    // int num;
    // ss >> num;
    // cout<<num;

    // Split sentence into words using string stream class
    string sen = "I love Traveling";
    stringstream ss(sen);

    string word;
    while(ss >> word){
        cout<<word<<endl;
    }
}