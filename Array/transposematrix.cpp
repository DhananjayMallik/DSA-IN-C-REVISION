#include <iostream>
#include<algorithm>
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
    // Transpose Matrix : without using an extra matrix
    // for(int j=0; j<n; j++){
    //     for(int i=0; i<m; i++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // Transpose Matrix : Using an extra matrix
    // int t[m][n];
    // for (int j = 0; j < n; j++)
    // {
    //     for (int i = 0; i < m; i++)
    //     {
    //         t[i][j] = arr[j][i];
    //     }
    // }
    // cout << endl;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << t[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // Transpose Matrix : Swapping Diagonal Element(Best Approach)
    for(int i=0; i<m; i++){
        for(int j=i+1; j<n; j++){
            swap(arr[i][j] , arr[j][i]);
        }
    }
    cout<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}