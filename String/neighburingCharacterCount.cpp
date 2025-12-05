#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter your original string : ";
    getline(cin,s);
    int count = 0;
    int n = s.length();
    for(int i=0; i<n; i++){
        if(n==1){
            break;
        }
        if(n==2 && s[i]!=s[i+1]){
            count = 1;
            break;
        }
        if(i==0){
            if(s[i] != s[i+1]){
                count++;
            }
        }
        else if(s[i] != s[i+1] && s[i] != s[i-1]){
            count++;
        }
    }
    cout<<"The different neighbour character count is = " << count;
    return 0;
}