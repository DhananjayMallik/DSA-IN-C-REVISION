#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter your input string : ";
    getline(cin,s);
    cout<<s<<endl;
    cout<<s.substr(2,4)<<endl;
    cout<<s.substr(0,4)<<endl;
    cout<<s.substr(2,3)<<endl;
    cout<<s.substr(5)<<endl;
    cout<<s.substr(0,3)<<endl;
    cout<<s.substr(2)<<endl;
    cout<<s.substr(2,2);
    return 0;
}