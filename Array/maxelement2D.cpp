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
    int max = INT_MIN;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(max < arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    cout<<"Maximum element is = " << max;
    return 0;
}