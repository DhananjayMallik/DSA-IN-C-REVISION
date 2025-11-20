#include<iostream>
#include<climits>
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
    int min = INT_MAX;
    for(int i=m; i>=0; i--){
        for(int j=n; j>=0; j--){
            if(min > arr[i][j]){
                min = arr[i][j];
            }
        }
    }
    cout<<"Minimum element is = " << min;
    return 0;
}