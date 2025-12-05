// #include<iostream>
// using namespace std;
// int main(){
//     string s = "Dhonu";
//     cout<<"Before updation string is = " << s <<endl;
//     s[0] = 's';
//     cout<<"After updation string is = " << s <<endl;
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;
    getline(cin,str);  // directly take string input

    for (int i = 0; i < str.length(); i++) {
        if (i % 2 == 0) {
            str[i] = 'a';
        }
    }

    cout << str;
 return 0;
}