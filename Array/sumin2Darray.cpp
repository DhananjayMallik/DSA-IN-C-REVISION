#include<iostream>
using namespace std;
int main(){
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
    int sum = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            sum += arr[i][j];
        }
    }
    cout<<"Sum of the given 2D array = " << sum;
    return 0;
}