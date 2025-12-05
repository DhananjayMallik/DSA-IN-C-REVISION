/* Using Two Pointer and also map of last occurence */
#include<bits/stdc++.h>
using namespace std;
int longestSubstring(string s){
    unordered_map<char, int> last;
    int left = 0;
    int longest = 0;
    for(int i=0; i<s.size(); i++){
        if(last.count(s[i]) && last[s[i]] >= left){
            left = last[s[i]] + 1;
        }
        // update the last index
        last[s[i]] = i;
        longest = max(longest, i-left+1);
    }
    return longest;
}
int main(){
    string s;
    cout<<"Enter your String";
    cin>>s;
    cout<<"The longest substring length is = " << longestSubstring(s);
    return 0;
}