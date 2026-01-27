#include<iostream>
#include<vector>
using namespace std;
bool isPossible_Minimize_Distance(vector<int> &arr, int k , double D){
	int GasStationNeeded = 0;
	for(int i=1; i<arr.size(); i++){
		double gap = arr[i]-arr[i-1];
		GasStationNeeded += (int)(gap/D);
	}
	return GasStationNeeded <= k; // should be minimum no of station needed 
}
double MinimizeGasStationDistance(vector<int> &arr, int k){
	// goal --> we need to minimize the maximum distance between two adjecent gas station
	double lo = 0.0;
	double hi = arr.back() - arr.front();
	while( hi-lo > 1e-6){
		double mid = lo+(hi-lo)/2;

		if(isPossible_Minimize_Distance(arr,k,mid)){
			hi = mid;
		}
		else{
			lo = mid;
		}
	}
	return hi;
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the array element : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter your allowed gas station : ";
    cin>>k;
    cout<<"Minimum distance between two adjacent gas station is = " << MinimizeGasStationDistance(arr,k);
    return 0;
}