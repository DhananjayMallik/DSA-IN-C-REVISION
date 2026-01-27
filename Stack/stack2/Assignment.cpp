/* Question1 : Valid Parenthesis */
#include<bits/stdc++.h>
#include<stack>
using namespace std;
bool isValidParenthesis(string s){
    stack<char>st;
    for(char c : s){
        // check opening bracket -> pushed into stack
        if( c == '(' || c == '[' || c == '{'){
            st.push(c);
        }
        else{
            // check is stack empty or it's a closing bracket
            if(st.empty()) return false;
            // take top of the stack 
            char top = st.top();
            st.pop();
            // matching opening bracket and corresponding closing bracket
            if(( c == ')' && top != '(') ||
              (  c == '}' && top != '{') ||
              (  c == ']' && top != '['))
              return false;
        }
    }
    return st.empty();
}
int main(){
    string s;
    cout<<"Enter your string : ";
    cin>>s;
    int isValid = isValidParenthesis(s);
    cout<<"is valid parenthesis : " << isValid << endl;
    return 0;
}
