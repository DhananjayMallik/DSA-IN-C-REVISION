#include<bits/stdc++.h>
using namespace std;
class Solution{
    public : 
    long long int binarySearch(int n){
        int lo = 0;
        int hi = n;
        long long int mid = lo+(hi-lo)/2;
        long long int ans = -1;
        while(lo <= hi){
            long long int square = mid * mid;
            if(square == n){
                return mid;
            }
            else if(square < n){
                ans = mid;
                lo = mid+1;
            } else{
                hi = mid-1;
            }
            mid = lo+(hi-lo)/2;
        }
        return ans;
    }
    int mySqrt(int x){
        return binarySearch(x);
    }
};
int main(){
    int x;
    cout<<"Enter your number : ";
    cin>>x;
    Solution s;
    int result = s.mySqrt(x);
    cout<<"Square Root of the number is = " << result;
    return 0;
}