/* #include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            ans = mid;      
            high = mid - 1;   // move left to find first occurrence
        }
        else if (arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    int n, x;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> x;

    int index = firstOccurrence(arr, n, x);
    cout << "Index of that element is = " << index;
} */

// Method 2 : find first occurence of the number x
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];
    cout<<"Enter the array element";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the number";
    cin>>x;
    bool flag = false;
    int lo = 0;
    int hi = n-1;
    while(lo <= hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                flag = true;
                cout<<mid;
                break;
            } else{
                hi = mid-1;
            }
        } else if(arr[mid] < x){
            lo = mid+1;
        } else{
            hi= mid-1;
        }
    }
    if(flag == false){
       cout<<-1;
    }
    return 0;
}