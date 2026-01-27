#include<bits/stdc++.h>
using namespace std;
int firstOccurance(vector<int> &arr, int x){
	int lo = 0;
	int hi = arr.size()-1;
	int mid = lo+(hi-lo)/2;
	int ans = -1;
	while(lo <= hi){
		if(arr[mid]==x){
			ans = mid;
			hi = mid-1;
		}
		else if(arr[mid] < x){
			lo = mid+1;
		}
		else{
			hi = mid-1;
		}
		mid = lo+(hi-lo)/2;
	}
	return ans;
}
int laststOccurance(vector<int> &arr, int x){
	int lo = 0;
	int hi = arr.size()-1;
	int mid = lo+(hi-lo)/2;
	int ans = -1;
	while(lo <= hi){
		if(arr[mid]==x){
			ans = mid;
			lo = mid+1;
		}
		else if(arr[mid] < x){
			lo = mid+1;
		}
		else{
			hi = mid-1;
		}
		mid = lo+(hi-lo)/2;
	}
	return ans;
}
vector<int> searchRange(vector<int> &arr, int x)
{
	// Write your code here.
	int first = firstOccurance(arr,x);
	int last  = laststOccurance(arr,x);
	return {first , last};
}


int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int x;
    cout << "Enter the number to search: ";
    cin >> x;

    vector<int> result = searchRange(arr, x);

    cout << "First and Last Occurrence: " << result[0] << " " << result[1] << endl;

    return 0;
}
