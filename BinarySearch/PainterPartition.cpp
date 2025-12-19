#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>& arr, int n, int m, int mid){
    int painter = 1;
    int boardPaint = 0;

    for(int i = 0; i < n; i++){
        if(boardPaint + arr[i] <= mid){
            boardPaint += arr[i];
        }
        else{
            painter++;                 
            if(painter > m || arr[i] > mid){
                return false;
            }
            boardPaint = arr[i];        
        }
    }
    return true;
}

int minTimeToPaint(vector<int>&arr, int n, int m){
    int sum = 0;
    int maxVal = INT_MIN;

    for(int i=0; i<n; i++){
        sum+=arr[i];
        maxVal = max(maxVal , arr[i]);
    }

    int s = maxVal;
    int e = sum;
    int ans = -1;

    while(s <= e){
        int mid = s+(e-s)/2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter no of board :";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the array element : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int m;
    cout<<"Enter the no of painter :";
    cin>>m;
    cout<<minTimeToPaint(arr,n,m)<<endl;
    return 0;
}