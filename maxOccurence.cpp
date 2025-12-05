#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    int maxFreq = 1, curr = 1;
    char ans = s[0];

    for(int i = 1; i < s.size(); i++) {
        if(s[i] == s[i-1]) {
            curr++;
        } else {
            curr = 1;
        }
        if(curr > maxFreq) {
            maxFreq = curr;
            ans = s[i];
        }
    }

    cout << ans;
    return 0;
}  