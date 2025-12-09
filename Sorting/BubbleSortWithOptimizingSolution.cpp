#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of the array";
    cin >> n;
    int arr[n];
    cout << "enter the array element";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // bubble sort
   for(int i=0; i<n-1; i++){
        bool flag = true;
       for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag = false;
        }
    } 
    if(flag == true){
        //cout<<"Already Sorted";
        break;
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}