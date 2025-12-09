class Solution {
public:
    int count = 0;
    // here we find how many count of reverse pairs will have -->
    void countPairs(int low, int mid, int high, vector<int>& nums) {
        int j = mid+1;
        for(int i=low; i<=mid; i++){
            while( j<= high && (long long)nums[i] > 2LL * nums[j]){
                j++;
            }
            count += (j - (mid + 1));
        }
    }
    // After found how many reverse pair occur then we can apply merge function 
    void mergeSorted(int low, int mid, int high, vector<int>& nums) {
        vector<int> temp;
        int left = low, right = mid + 1;

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right])
                temp.push_back(nums[left++]);
            else
                temp.push_back(nums[right++]);
        }

        while (left <= mid) temp.push_back(nums[left++]);
        while (right <= high) temp.push_back(nums[right++]);

        for (int i = low; i <= high; i++)
            nums[i] = temp[i - low];
    }

    void mergeSort(int low, int high, vector<int>& nums) {
        if (low >= high) return;

        int mid = (low + high) / 2;

        mergeSort(low, mid, nums);
        mergeSort(mid + 1, high, nums);
        countPairs(low, mid, high, nums);
        mergeSorted(low, mid, high, nums);
    }

    int reversePairs(vector<int>& nums) {
        mergeSort(0, nums.size() - 1, nums);
        return count;
    }
};
