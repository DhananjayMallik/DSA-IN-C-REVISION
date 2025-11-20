#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter the number of rows : " << endl;
    cin >> m;
    int n;
    cout << "Enter the number of columns :";
    cin >> n;
    int arr[m][n];
    cout << "Enter Your 2D array element";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int j = 0; j < n; j++)
    {
        for (int i= 0; i < m; i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}