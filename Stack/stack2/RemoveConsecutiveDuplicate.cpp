#include <bits/stdc++.h>
#include <stack>
using namespace std;
string removeConsecutiveString(string s)
{
    stack<char> st;
    st.push(s[0]);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != st.top())
            st.push(s[i]);
    }
        s = "";
        while (st.size() > 0)
        {
            s += st.top();
            st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
}
int main()
{
    string s;
    cout << "Enter your string : ";
    cin >> s;
    cout << "Before Remove consecutive string : " << s << endl;
    s = removeConsecutiveString(s);
    cout << "After Remove Consecutive string : " << s << endl;
    return 0;
}