#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int>&arr){
    int s = 0;
    int e = arr.size()-1;
    while(s < e){
        int mid = s+(e-s)/2;
        if(arr[mid] < arr[mid+1]){
            s = mid+1;
        } else{
            e = mid;
        }
    }
    return e;
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

    int peak = peakIndexInMountainArray(arr);

    cout << "index of that peak element is : " << peak << endl;
    cout << "value of the peak element is : " << arr[peak] << endl;
    return 0;
}
/* 
leet code : 1095 
Find in Mountain Array : hard Problem 


class Solution {
public:
int binarySearchDec(MountainArray &mountainArr, int target, int left, int right){
    while(left <= right){
       int mid = left+(right-left)/2;
       int value = mountainArr.get(mid);
       if(value == target) return mid;
       else if(value > target) left = mid+1;
       else right = mid-1;
    }
    return -1;
}
int binarySearchInc(MountainArray &mountainArr, int target, int left, int right) {
    while(left <= right){
       int mid = left+(right-left)/2;
       int value = mountainArr.get(mid);
       if(value == target) return mid;
       else if(value < target) left = mid+1;
       else right = mid-1;
    }
    return -1;
}
int findPeak(MountainArray &mountainArr){
    int left = 0;
    int right = mountainArr.length()-1;
    while(left < right){
    int mid = left+(right-left)/2;
    int midVal = mountainArr.get(mid);
    int nextVal = mountainArr.get(mid+1);
    if(midVal < nextVal){
        left = mid+1;
      }
         else{
         right = mid;
     }
  }
    return left;
}
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        // step 1. Find peak
        int peak = findPeak(mountainArr);

        // step 2. Search left (increasing part)
        int leftAns = binarySearchInc(mountainArr, target, 0, peak);
        if (leftAns != -1) return leftAns;

        // step 3. Search right (decreasing part)
        return binarySearchDec(mountainArr, target, peak + 1, n - 1);
    }
};
*/
