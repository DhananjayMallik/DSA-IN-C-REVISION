#include <iostream>
using namespace std;
int main()
{
    // declaration of 2D Array
    // int arr[2][3] = {{1,2,3} , {4,5,6}};
    // for(int i=0; i<2; i++){
    //     for(int j=0; j<3; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    // }

    // taking 2d array as a input
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