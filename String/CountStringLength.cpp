#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter your string : ";
    getline(cin,s);
    int count = 0;
    int i=0;
    while(s[i] != '\0'){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;
        }
        i++;
    }
    cout<<"The no of vowel count is = " << count;
    return 0;
}