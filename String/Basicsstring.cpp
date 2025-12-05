#include<iostream>
using namespace std;
int main(){
    string s;
    // this input statement will ignore all the whitespaces
    // cin>>s; 
    getline(cin,s); // allow all the whitespaces
    cout<<s;
    return 0;
}