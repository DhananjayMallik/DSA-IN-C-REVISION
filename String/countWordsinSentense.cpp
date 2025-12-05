#include<iostream>
#include<sstream>
using namespace std;
int main(){
    // count words in sentence
    string s = "Hello how are you";
    stringstream ss(s);
    string word;
    int count = 0;
    while(ss >> word) count++;
    cout<<count;
    return 0;
}