#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int findPivot(vector<int>&nums){
    int n = nums.size();
    int left = 0;
    int right = n-1;
    // in this case pivot index should be Zero 
    if(nums[left] <= nums[right]){
        return 0;
    }
    while(left <= right){
        int mid = left+(right-left)/2;
        // pivot condition 1
        if(mid < n-1 && nums[mid] > nums[mid+1]){
            return mid+1;
        }
        // pivot condition 2
        if(mid > 0 && nums[mid] < nums[mid-1]){
            return mid;
        }
        // search space reduce
        if(nums[mid]<=nums[left]){
            left = mid+1;
        } else{
            right = mid-1;
        }
    }
    return 0;
}
int binarySearch(vector<int>&nums, int lo, int hi, int target){
      while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if (nums[mid] == target)
                return mid;

            if (nums[mid] < target)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        return -1;
}
    int search(vector<int>& nums, int target) {
        // step 1 : find the pivot element
        int n = nums.size();
        int pivot = findPivot(nums);
        // step 2 : After find pivot then decide where to go left or right
        // If no rotation (pivot = 0)
        if (pivot == 0)
            return binarySearch(nums, 0, n - 1, target);
            // step 3 : If target in left sorted part
        if(target >= nums[0]){
            return binarySearch(nums, 0, pivot - 1, target);
        }
        return binarySearch(nums, pivot , n-1, target);
    }
};
int main(){
    vector<int>nums = {4,5,6,7,0,1,2};
    int target = 3;
    Solution s;
    int result = s.search(nums,target);
    cout<<"Output is = " << result;
    return 0;
}