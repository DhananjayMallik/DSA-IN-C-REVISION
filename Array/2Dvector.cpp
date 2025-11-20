

#include <iostream>
#include <vector>
using namespace std;
int main()

{

    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int> v2;
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);

    vector<vector<int>> v;
    v.push_back(v1);
    v.push_back(v2);

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}