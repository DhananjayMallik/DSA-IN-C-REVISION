#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    // 1 : length calculate
    // string str;
    // cout<<"Enter your string : ";
    // getline(cin,str);
    // cout<<"String length is = " << str.length();

    // 2 : reverse function
    // string str;
    // cout<<"Enter your string : ";
    // getline(cin,str);
    // cout<<"Before Reverse your string is = " <<str << endl;
    // reverse(str.begin()+1, str.end());
    // cout<<"After Reverse your string = " << str;

    // 3 : Push-pop
    // string s = "Dhananjay";
    // cout<<"Before pushing your string is = " << s << endl;
    // s.push_back('m');
    // s.push_back('a');
    // s.push_back('l');
    // s.push_back('l');
    // s.push_back('i');
    // s.push_back('k');
    // cout<<"After pushing an extra character your entire string is = " << s << endl;
    // cout<<"before popping your string is = " << s << endl;;
    // s.pop_back();
    // s.pop_back();
    // cout<<"After popping your string is = " << s;

    // string + operator
    string s = "123";
    cout << "Before adding : " << s << endl;
    s = s + "456";
    cout << "After adding : " << s;
    return 0;
}