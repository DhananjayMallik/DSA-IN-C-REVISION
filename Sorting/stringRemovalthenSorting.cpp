#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "AZYZXBDJKX";
    string str;
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'X'){
            str.push_back(s[i]);
        }
    }
    sort(str.begin(),str.end());
    cout<<str;
    return 0;
}