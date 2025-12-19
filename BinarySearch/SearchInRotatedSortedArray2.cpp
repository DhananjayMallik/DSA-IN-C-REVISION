#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        int lo = 0;
        int hi = nums.size() - 1;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target)
            {
                return true;
            }
            // check duplicate
            if (nums[lo] == nums[mid] && nums[mid] == nums[hi])
            {
                lo++;
                hi--;
            }
            // check which part is sorted
            // if left part is sorted
            else if (nums[lo] <= nums[mid])
            {
                // Check if target lies inside the sorted part(left)
                if (nums[lo] <= target && target < nums[mid])
                {
                    hi = mid - 1; // target lies on the left sorted part
                }
                else
                {
                    lo = mid + 1; // target lies on the right sorted part
                }
            }
            // if right part is sorted
            else
            {
                if (nums[mid] < target && target <= nums[hi])
                {
                    lo = mid + 1; // target lies on the right sorted part
                }
                else
                {
                    hi = mid - 1; // target lies on the left sorted part
                }
            }
        }
        return false;
    }
};
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the array element :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int target;
    cout << "Enter your target : \n";
    cin >> target;

    Solution s; // create object of solution class
    int result = s.search(nums, target);
    cout << "Output is = " << result << endl;
    return 0;
}


// int stCount = 1;
//     int pageSum = 0;
//     for(int i=0; i<n; i++){
//         if(pageSum + arr[i] <= mid){
//             pageSum += arr[i];
//         }
//         else{
//             stCount++;
//             if(stCount > m || arr[i] > mid){
//                 return false;
//             }
//             pageSum = arr[i];
//         }
//     }
//     return true;

// if(m>n) return -1;
//     // Write your code here.
//     int s = 0;
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum+=arr[i];
//     }
//     int e = sum;
//     int ans = -1;
//     int mid = s+(e-s)/2;
//     while(s <= e){
//         if(isPossible(arr,n,m,mid)){
//             ans = mid;
//             e = mid-1;
//         } else{
//             s = mid+1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return ans;