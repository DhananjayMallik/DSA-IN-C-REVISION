#include<bits/stdc++.h>
using namespace std;
int findDays(vector<int> &weights, int cap){
    int days = 1;
    int load = 0;
    for(int i=0; i<weights.size(); i++){
        if(load + weights[i] > cap){
            days++;
            load += weights[i];
        }
        else{
            load = weights[i];
        }
    }
    return days;
}
int leastWeightCapacity(vector<int> &weights, int d){
    int maxi = -1;
    int sum = 0;
    for(int i=0; i<weights.size(); i++){
        sum += weights[i];
        maxi = max(maxi , weights[i]);
    }
    int lo = maxi;
    int hi = sum;
    while(lo <= hi){
        int mid = lo+(hi-lo)/2;
        int noOfDays = findDays(weights , mid);
        if(noOfDays <= d){
            hi = mid-1;
        } 
        else{
            lo = mid+1;
        }
    }
    return lo;
}
int main(){
    int n;
    cout<<"Enter the size of each product : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter all the product : ";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int days;
    cout<<"Enter the days required : ";
    cin>>days;
    cout<<"Least capacity to ship all the packages within D days : " << leastWeightCapacity(v,days);
    return 0;
}