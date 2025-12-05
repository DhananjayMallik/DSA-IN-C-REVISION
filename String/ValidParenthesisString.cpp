#include<iostream>
using namespace std;
bool checkValidString(string s) {
        int openCount = 0;
        int closeCount = 0;
        int length = s.length() - 1;
        for(int i=0; i<=length; i++){
            // checking open parenthesis
            if(s[i]=='(' || s[i] == '*'){
                openCount++;
            } else{
                openCount--;
            }
            // checking closing parenthesis
            if(s[length-i]==')' || s[length-i]=='*'){
                closeCount++;
            } else{
                closeCount--;
            }
            // If at any point open count or close count goes negative, the string is invalid 
            if (openCount < 0 || closeCount < 0) { 
                return false;
            }
        }
       return true;
    }
int main(){
    string s;
    cout<<"Enter your string"<<endl;
    getline(cin,s);
    if(checkValidString(s)){
        cout<<"Valid Parenthesis";
    } else{
        cout<<"Not Valid Parenthesis";
    }
    return 0;

}