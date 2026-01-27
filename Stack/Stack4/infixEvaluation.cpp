#include<iostream>
#include<stack>
#include<string>
using namespace std;
int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
int solve(int val1, int val2, char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main(){
    string s = "2+6*4/8-3";
    stack<int>val;
    stack<char>op;
    for(int i=0; i<s.length(); i++){
        // check if s[i] digit
        if(s[i]>=48 && s[i]<=57){
            // digit
            val.push(s[i]-48);
        } 
        else{
            // not digit -> *,-,+/
            if(op.size()==0 || prio(s[i])>prio(op.top()))
            op.push(s[i]);

            else{
                // work --> presedence of the current operator and top of the previous operator
                while(op.size()>0 && prio(s[i])<=prio(op.top())){
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans =  solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);

            }
        }
    }
    // the operator stack can have value
    // so make empty
    while(op.size()>0){
         char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans =  solve(val1,val2,ch);
                    val.push(ans);
    }
    cout<<val.top();
}
