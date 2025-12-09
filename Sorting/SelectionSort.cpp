#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int mindx = i;   // assume current index is minimum

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[mindx]) {
                mindx = j;
            }
        }

        swap(arr[i], arr[mindx]); // swap after finding minimum
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
