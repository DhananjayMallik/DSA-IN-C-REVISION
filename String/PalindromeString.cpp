#include<iostream>
using namespace std;

bool isPalindrome(string s) {
    int i = 0, j = s.length() - 1;

    while (i < j) {

        // skip non-alphanumeric
       while( i < j && !isalnum(s[i])) i++;
       while( i < j && !isalnum(s[j])) j--;


        // convert to uppercase to lowercase and then compare
        if (tolower(s[i]) != tolower(s[j]))
            return false;

        i++;
        j--;
    }
    return true;
}

int main(){
    string s;
    cout<<"Enter your string"<<endl;
    getline(cin,s);
    if(isPalindrome(s)){
        cout<<"Palindrome";
    } else{
        cout<<"Not Palindrome";
    }
    return 0;

}