#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int size, int target)
{
    int lo = 0;
    int hi = size - 1;
    int mid = lo + (hi - lo) / 2;
    while (lo <= hi)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
        mid = lo + (hi - lo) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int evenIndex = BinarySearch(even, 6, 18);
    cout << " Index of 18 is at  " << evenIndex << endl;
     int odd[5] = {2, 4, 6, 8, 12};
    int oddIndex = BinarySearch(even, 5,8);
    cout << " Index of 8 is at  " << oddIndex << endl;
    return 0;
}

/* Binary Search should be in monotonic function
Monotonic Function : When the condition becomes true it stay true and when the condition becomes false it stay false
otherwise you cannot decide whether to go left or right
Example 1: Standard Binary Search

Array:

1 2 3 4 5 6 7


Condition: arr[mid] >= target

This condition becomes true at some point and remains true → monotonic.
So binary search works. */