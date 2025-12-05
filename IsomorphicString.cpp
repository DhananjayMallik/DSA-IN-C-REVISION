/* Approach : check pattern of every appeared character index if pattern matched then it should be isomorphic otherwise not isomorphic*/
#include <iostream>
#include <vector>
using namespace std;
bool isIsomorphic(string s, string t)
{
     if (s.length() != t.length()) return false;

    vector<int> lastS(256, -1);
    vector<int> lastT(256, -1);

    for (int i = 0; i < s.length(); i++) {
        if (lastS[s[i]] != lastT[t[i]]) 
            return false;   // if your patterns will mismatch

        lastS[s[i]] = i;
        lastT[t[i]] = i;
    }
    return true;

}
int main()
{
    string s;
    cout<<"Enter your First string"<<endl;
    cin>>s;
    string t;
    cout<<"Enter your second string"<<endl;
    cin>>t;

    if (isIsomorphic(s, t))
        cout << "Isomorphic";
    else
    {
        cout << "Not Isomorphic";
    }
    return 0;
}