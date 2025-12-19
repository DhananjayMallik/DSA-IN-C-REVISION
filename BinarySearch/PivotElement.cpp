#include<iostream>
#include<vector>
using namespace std;
int findPivotElement(vector<int>&arr){
    int n = arr.size();
    int left = 0;
    int right = n-1;
    // in this case pivot index should be Zero 
    if(arr[left] <= arr[right]){
        return 0;
    }
    while(left <= right){
        int mid = left+(right-left)/2;
        // pivot condition 1
        if(mid < n-1 && arr[mid] > arr[mid+1]){
            return mid+1;
        }
        // pivot condition 2
        if(mid > 0 && arr[mid] < arr[mid-1]){
            return mid;
        }
        // search space reduce
        if(arr[mid]<=arr[left]){
            left = mid+1;
        } else{
            right = mid-1;
        }
    }
    return 0;
}
int main(){
     int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of the mountain array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int PivotIndex = findPivotElement(arr);

    cout << "index of that Pivot element is : " << PivotIndex << endl;
    cout << "value of the Pivot element is : " << arr[PivotIndex] << endl;
}