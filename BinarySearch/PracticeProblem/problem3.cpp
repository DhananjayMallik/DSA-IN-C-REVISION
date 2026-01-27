#include<iostream>
using namespace std;
long long int binarySearch(int n){
    int lo = 0;
    int hi = n;
    long long int ans = -1;
    long long int mid = lo+(hi-lo)/2;
    while(lo <= hi){
        long long int square = mid*mid;
        if(square == n) return mid;
        else if(square < n){
            ans = mid;
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
        mid = lo+(hi-lo)/2;
    }
    return ans;
}
int floorSqrt(int n)
{
    // Write your code here.
    return binarySearch(n);
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout <<"Square Root of the number is " << floorSqrt(n);
    return 0;
}