#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string s = "I love Traveling";
    stringstream ss(s);
    string word;
    while(ss >> word){
        cout<<word<<endl;
    }
    return 0;
}