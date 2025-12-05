#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cout << "Enter your first string : ";
    getline(cin, s);
    string t;
    cout << "Enter your second string : ";
    getline(cin, t);
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        cout<<1<<endl;
    } else{
        cout<<0;
    }
    return 0;
}