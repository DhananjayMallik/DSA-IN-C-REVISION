#include <iostream>
using namespace std;
int main()
{
    // 1st matrix
    int m;
    cout << "Enter the number of rows" << endl;
    cin >> m;
    int n;
    cout << " Enter the number of cols" << endl;
    cin >> n;
    int a[m][n];
    cout << "Enter Array Element" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    // 2nd matrix
    int p;
    cout << "Enter the number of rows" << endl;
    cin >> p;
    int q;
    cout << "Enter the number of cols" << endl;
    cin >> q;
    int b[p][q];
    cout << "Enter Array Element" << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> b[i][j];
        }
    }
    // 3rd matrix
    int res[m][q];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < p; k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
            cout << endl;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
